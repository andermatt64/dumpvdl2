/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_TimeSeconds_H_
#define	_TimeSeconds_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TimeSeconds */
typedef long	 TimeSeconds_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeSeconds;
asn_struct_free_f TimeSeconds_free;
asn_struct_print_f TimeSeconds_print;
asn_constr_check_f TimeSeconds_constraint;
ber_type_decoder_f TimeSeconds_decode_ber;
der_type_encoder_f TimeSeconds_encode_der;
xer_type_decoder_f TimeSeconds_decode_xer;
xer_type_encoder_f TimeSeconds_encode_xer;
per_type_decoder_f TimeSeconds_decode_uper;
per_type_encoder_f TimeSeconds_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeSeconds_H_ */
#include "asn_internal.h"
