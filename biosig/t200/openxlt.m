function [HDR]=openxlt(fn)
% OPENXLT is an auxillary function to SOPEN for 
% opening of XLTEK files 
% 
% Use SOPEN instead of OPENXLT  
% 
% See also: fopen, SOPEN, 
%
% References: 
% [1] 
% [2] 

% This program is free software; you can redistribute it and/or
% modify it under the terms of the GNU General Public License
% as published by the Free Software Foundation; either version 2
% of the License, or (at your option) any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

%	$Revision: 1.1 $
%	$Id: openxlt.m,v 1.1 2004-11-18 16:03:55 schloegl Exp $
%	(C) 2004 by Alois Schloegl <a.schloegl@ieee.org>	
%    	This is part of the BIOSIG-toolbox http://biosig.sf.net/


fprintf(2,'Warning: OPENXLT is in an experimental state and is most likely not useful to you.\n'); 
fprintf(2,'\t Do not use it unless you are sure know what you do. At least you are warned!\n');

if ischar(fn)
        HDR.FileName = fn; 
        [pfad,file,FileExt] = fileparts(HDR.FileName);
        HDR.FILE.Name = file;
        HDR.FILE.Path = pfad;
        HDR.FILE.Ext  = char(FileExt(2:length(FileExt)));
end;

% read etc file 
fid = fopen(fullfile(HDR.FILE.Path,[HDR.FILE.Name,'.etc']),'r');
if fid<0, 
        fid = fopen(fullfile(HDR.FILE.Path,[HDR.FILE.Name,'.ETC']),'r');
end
if fid>0, 
        status = fseek(fid,hex2dec(164),'bof');
        HDR.XLT.timebase = fread(fid,1,'int32'); 
        fclose(fid);
end;

% read ent file 
fid = fopen(fullfile(HDR.FILE.Path,[HDR.FILE.Name,'.ent']),'r');
if fid<0, 
        fid = fopen(fullfile(HDR.FILE.Path,[HDR.FILE.Name,'.ENT']),'r');
end
if fid>0, 
        while ~feof(fid)
                tline = fgetl(fid);
                if strncmp(tline,'Stamp',5),
                        [t,r] = strtok(tline,' ');
                        [t,r] = strtok(r,' ');
                        [HDR.XLT.timebase2,c] = str2double(t);
                        ix = strfind(tline,'patient');
                else
                        
                end
        end;
        fclose(fid);
end;


% read erd file 
fid = fopen(HDR.FileName);
if fid>0, 
        HDR.H1 = fread(fid,352,'uchar'); 
        HDR.SampleRate = fread(fid,1,'uchar'); 
        tmp = fread(fid,2,'int32'); 
        HDR.NS = tmp(1);
        HDR.bits = tmp(2); % ???? ### 
        HDR.XLT.PhysChan = fread(fid,1024,'int32'); 
        HDR.XLT.HeadBoxType = fread(fid,4,'int32'); 
        HDR.XLT.HeadBoxSN = fread(fid,4,'int32'); 
        HDR.XLT.HeadBoxSoftwareVersion = fread(fid,[4,16],'char'); 
        HDR.XLT.DSP_HW_Version = fread(fid,[16],'char'); 
        HDR.XLT.DSP_SW_Version = fread(fid,[16],'char'); 
        HDR.XLT.DiscardBits = fread(fid,4,'int32'); 
        
        HDR.XLT.shorted = fread(fid,1024,'int16'); 
        HDR.XLT.FrequencyFactor = fread(fid,1024,'int16'); 
        
        HDR.HeadLen = hex2dec('21D0');
        status = fseek(fid,HDR.HeadLen,'bof');
        
        
        
        
        fclose(fid); 
        
end;

