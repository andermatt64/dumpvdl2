/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CMMessageSetVersion1"
 * 	found in "atn-cm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_LocSysNselTsel_H_
#define	_LocSysNselTsel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LocSysNselTsel */
typedef OCTET_STRING_t	 LocSysNselTsel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocSysNselTsel;
asn_struct_free_f LocSysNselTsel_free;
asn_struct_print_f LocSysNselTsel_print;
asn_constr_check_f LocSysNselTsel_constraint;
ber_type_decoder_f LocSysNselTsel_decode_ber;
der_type_encoder_f LocSysNselTsel_encode_der;
xer_type_decoder_f LocSysNselTsel_decode_xer;
xer_type_encoder_f LocSysNselTsel_encode_xer;
per_type_decoder_f LocSysNselTsel_decode_uper;
per_type_encoder_f LocSysNselTsel_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LocSysNselTsel_H_ */
#include "asn_internal.h"
