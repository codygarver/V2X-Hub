/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_TemporaryID_H_
#define	_TemporaryID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TemporaryID */
typedef OCTET_STRING_t	 TemporaryID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TemporaryID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TemporaryID;
asn_struct_free_f TemporaryID_free;
asn_struct_print_f TemporaryID_print;
asn_constr_check_f TemporaryID_constraint;
ber_type_decoder_f TemporaryID_decode_ber;
der_type_encoder_f TemporaryID_encode_der;
xer_type_decoder_f TemporaryID_decode_xer;
xer_type_encoder_f TemporaryID_encode_xer;
oer_type_decoder_f TemporaryID_decode_oer;
oer_type_encoder_f TemporaryID_encode_oer;
per_type_decoder_f TemporaryID_decode_uper;
per_type_encoder_f TemporaryID_encode_uper;
per_type_decoder_f TemporaryID_decode_aper;
per_type_encoder_f TemporaryID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TemporaryID_H_ */
#include "asn_internal.h"
