/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "TestMessage04.h"

asn_TYPE_member_t asn_MBR_TestMessage04_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TestMessage04, body),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TrafficControlRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"body"
		},
};
static const ber_tlv_tag_t asn_DEF_TestMessage04_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TestMessage04_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* body */
};
asn_SEQUENCE_specifics_t asn_SPC_TestMessage04_specs_1 = {
	sizeof(struct TestMessage04),
	offsetof(struct TestMessage04, _asn_ctx),
	asn_MAP_TestMessage04_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TestMessage04 = {
	"TestMessage04",
	"TestMessage04",
	&asn_OP_SEQUENCE,
	asn_DEF_TestMessage04_tags_1,
	sizeof(asn_DEF_TestMessage04_tags_1)
		/sizeof(asn_DEF_TestMessage04_tags_1[0]), /* 1 */
	asn_DEF_TestMessage04_tags_1,	/* Same as above */
	sizeof(asn_DEF_TestMessage04_tags_1)
		/sizeof(asn_DEF_TestMessage04_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TestMessage04_1,
	1,	/* Elements count */
	&asn_SPC_TestMessage04_specs_1	/* Additional specs */
};

