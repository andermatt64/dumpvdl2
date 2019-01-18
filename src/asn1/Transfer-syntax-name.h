/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULCS"
 * 	found in "atn-ulcs.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_Transfer_syntax_name_H_
#define	_Transfer_syntax_name_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OBJECT_IDENTIFIER.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Transfer-syntax-name */
typedef OBJECT_IDENTIFIER_t	 Transfer_syntax_name_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Transfer_syntax_name;
asn_struct_free_f Transfer_syntax_name_free;
asn_struct_print_f Transfer_syntax_name_print;
asn_constr_check_f Transfer_syntax_name_constraint;
ber_type_decoder_f Transfer_syntax_name_decode_ber;
der_type_encoder_f Transfer_syntax_name_encode_der;
xer_type_decoder_f Transfer_syntax_name_decode_xer;
xer_type_encoder_f Transfer_syntax_name_encode_xer;
per_type_decoder_f Transfer_syntax_name_decode_uper;
per_type_encoder_f Transfer_syntax_name_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Transfer_syntax_name_H_ */
#include "asn_internal.h"
