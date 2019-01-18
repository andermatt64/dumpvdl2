/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CMMessageSetVersion1"
 * 	found in "atn-cm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_AirportDeparture_H_
#define	_AirportDeparture_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Airport.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AirportDeparture */
typedef Airport_t	 AirportDeparture_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AirportDeparture;
asn_struct_free_f AirportDeparture_free;
asn_struct_print_f AirportDeparture_print;
asn_constr_check_f AirportDeparture_constraint;
ber_type_decoder_f AirportDeparture_decode_ber;
der_type_encoder_f AirportDeparture_encode_der;
xer_type_decoder_f AirportDeparture_decode_xer;
xer_type_encoder_f AirportDeparture_encode_xer;
per_type_decoder_f AirportDeparture_decode_uper;
per_type_encoder_f AirportDeparture_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AirportDeparture_H_ */
#include "asn_internal.h"
