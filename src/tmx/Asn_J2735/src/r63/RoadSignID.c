/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "RoadSignID.h"

asn_TYPE_member_t asn_MBR_RoadSignID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSignID, position),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"position"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSignID, viewAngle),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeadingSlice,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"viewAngle"
		},
	{ ATF_POINTER, 2, offsetof(struct RoadSignID, mutcdCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MUTCDCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mutcdCode"
		},
	{ ATF_POINTER, 1, offsetof(struct RoadSignID, crc),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCRC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crc"
		},
};
static const int asn_MAP_RoadSignID_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_RoadSignID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RoadSignID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* position */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* viewAngle */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mutcdCode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* crc */
};
asn_SEQUENCE_specifics_t asn_SPC_RoadSignID_specs_1 = {
	sizeof(struct RoadSignID),
	offsetof(struct RoadSignID, _asn_ctx),
	asn_MAP_RoadSignID_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RoadSignID_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RoadSignID = {
	"RoadSignID",
	"RoadSignID",
	&asn_OP_SEQUENCE,
	asn_DEF_RoadSignID_tags_1,
	sizeof(asn_DEF_RoadSignID_tags_1)
		/sizeof(asn_DEF_RoadSignID_tags_1[0]), /* 1 */
	asn_DEF_RoadSignID_tags_1,	/* Same as above */
	sizeof(asn_DEF_RoadSignID_tags_1)
		/sizeof(asn_DEF_RoadSignID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RoadSignID_1,
	4,	/* Elements count */
	&asn_SPC_RoadSignID_specs_1	/* Additional specs */
};

