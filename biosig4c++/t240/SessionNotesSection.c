/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#include <asn_internal.h>

#include "SessionNotesSection.h"

static asn_TYPE_member_t asn_MBR_diagnosticscodes_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtNomenRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_diagnosticscodes_tags_9[] = {
	(ASN_TAG_CLASS_APPLICATION | (2492 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_diagnosticscodes_specs_9 = {
	sizeof(struct SessionNotesSection__diagnosticscodes),
	offsetof(struct SessionNotesSection__diagnosticscodes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_diagnosticscodes_9 = {
	"diagnosticscodes",
	"diagnosticscodes",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_diagnosticscodes_tags_9,
	sizeof(asn_DEF_diagnosticscodes_tags_9)
		/sizeof(asn_DEF_diagnosticscodes_tags_9[0]) - 1, /* 1 */
	asn_DEF_diagnosticscodes_tags_9,	/* Same as above */
	sizeof(asn_DEF_diagnosticscodes_tags_9)
		/sizeof(asn_DEF_diagnosticscodes_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_diagnosticscodes_9,
	1,	/* Single element */
	&asn_SPC_diagnosticscodes_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_procedurecodes_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtNomenRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_procedurecodes_tags_12[] = {
	(ASN_TAG_CLASS_APPLICATION | (2493 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_procedurecodes_specs_12 = {
	sizeof(struct SessionNotesSection__procedurecodes),
	offsetof(struct SessionNotesSection__procedurecodes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_procedurecodes_12 = {
	"procedurecodes",
	"procedurecodes",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_procedurecodes_tags_12,
	sizeof(asn_DEF_procedurecodes_tags_12)
		/sizeof(asn_DEF_procedurecodes_tags_12[0]) - 1, /* 1 */
	asn_DEF_procedurecodes_tags_12,	/* Same as above */
	sizeof(asn_DEF_procedurecodes_tags_12)
		/sizeof(asn_DEF_procedurecodes_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_procedurecodes_12,
	1,	/* Single element */
	&asn_SPC_procedurecodes_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SessionNotesSection_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SessionNotesSection, handle),
		(ASN_TAG_CLASS_APPLICATION | (2337 << 2)),
		0,
		&asn_DEF_Handle,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"handle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SessionNotesSection, sn_id),
		(ASN_TAG_CLASS_APPLICATION | (2505 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sn-id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SessionNotesSection, sn_name),
		(ASN_TAG_CLASS_APPLICATION | (2511 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sn-name"
		},
	{ ATF_POINTER, 1, offsetof(struct SessionNotesSection, sn_comments),
		(ASN_TAG_CLASS_APPLICATION | (2528 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sn-comments"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SessionNotesSection, starttime),
		(ASN_TAG_CLASS_APPLICATION | (2538 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"starttime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SessionNotesSection, stoptime),
		(ASN_TAG_CLASS_APPLICATION | (2539 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"stoptime"
		},
	{ ATF_POINTER, 7, offsetof(struct SessionNotesSection, findings),
		(ASN_TAG_CLASS_APPLICATION | (2500 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"findings"
		},
	{ ATF_POINTER, 6, offsetof(struct SessionNotesSection, diagnosticscodes),
		(ASN_TAG_CLASS_APPLICATION | (2492 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_diagnosticscodes_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"diagnosticscodes"
		},
	{ ATF_POINTER, 5, offsetof(struct SessionNotesSection, diagnosisdescription),
		(ASN_TAG_CLASS_APPLICATION | (2494 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"diagnosisdescription"
		},
	{ ATF_POINTER, 4, offsetof(struct SessionNotesSection, procedurecodes),
		(ASN_TAG_CLASS_APPLICATION | (2493 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_procedurecodes_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"procedurecodes"
		},
	{ ATF_POINTER, 3, offsetof(struct SessionNotesSection, proceduredescription),
		(ASN_TAG_CLASS_APPLICATION | (2495 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"proceduredescription"
		},
	{ ATF_POINTER, 2, offsetof(struct SessionNotesSection, protection),
		(ASN_TAG_CLASS_APPLICATION | (2519 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ArchiveProtection,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"protection"
		},
	{ ATF_POINTER, 1, offsetof(struct SessionNotesSection, placeholder),
		(ASN_TAG_CLASS_APPLICATION | (6499 << 2)),
		0,
		&asn_DEF_Placeholder,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"placeholder"
		},
};
static ber_tlv_tag_t asn_DEF_SessionNotesSection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SessionNotesSection_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (2337 << 2)), 0, 0, 0 }, /* handle at 1479 */
    { (ASN_TAG_CLASS_APPLICATION | (2492 << 2)), 7, 0, 0 }, /* diagnosticscodes at 1496 */
    { (ASN_TAG_CLASS_APPLICATION | (2493 << 2)), 9, 0, 0 }, /* procedurecodes at 1502 */
    { (ASN_TAG_CLASS_APPLICATION | (2494 << 2)), 8, 0, 0 }, /* diagnosisdescription at 1498 */
    { (ASN_TAG_CLASS_APPLICATION | (2495 << 2)), 10, 0, 0 }, /* proceduredescription at 1504 */
    { (ASN_TAG_CLASS_APPLICATION | (2500 << 2)), 6, 0, 0 }, /* findings at 1492 */
    { (ASN_TAG_CLASS_APPLICATION | (2505 << 2)), 1, 0, 0 }, /* sn-id at 1482 */
    { (ASN_TAG_CLASS_APPLICATION | (2511 << 2)), 2, 0, 0 }, /* sn-name at 1484 */
    { (ASN_TAG_CLASS_APPLICATION | (2519 << 2)), 11, 0, 0 }, /* protection at 1506 */
    { (ASN_TAG_CLASS_APPLICATION | (2528 << 2)), 3, 0, 0 }, /* sn-comments at 1486 */
    { (ASN_TAG_CLASS_APPLICATION | (2538 << 2)), 4, 0, 0 }, /* starttime at 1488 */
    { (ASN_TAG_CLASS_APPLICATION | (2539 << 2)), 5, 0, 0 }, /* stoptime at 1490 */
    { (ASN_TAG_CLASS_APPLICATION | (6499 << 2)), 12, 0, 0 } /* placeholder at 1508 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SessionNotesSection_specs_1 = {
	sizeof(struct SessionNotesSection),
	offsetof(struct SessionNotesSection, _asn_ctx),
	asn_MAP_SessionNotesSection_tag2el_1,
	13,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SessionNotesSection = {
	"SessionNotesSection",
	"SessionNotesSection",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SessionNotesSection_tags_1,
	sizeof(asn_DEF_SessionNotesSection_tags_1)
		/sizeof(asn_DEF_SessionNotesSection_tags_1[0]), /* 1 */
	asn_DEF_SessionNotesSection_tags_1,	/* Same as above */
	sizeof(asn_DEF_SessionNotesSection_tags_1)
		/sizeof(asn_DEF_SessionNotesSection_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SessionNotesSection_1,
	13,	/* Elements count */
	&asn_SPC_SessionNotesSection_specs_1	/* Additional specs */
};

