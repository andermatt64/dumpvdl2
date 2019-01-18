/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CPDLCAPDUsVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_CPDLCUserAbortReason_H_
#define	_CPDLCUserAbortReason_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CPDLCUserAbortReason {
	CPDLCUserAbortReason_undefined	= 0,
	CPDLCUserAbortReason_no_message_identification_numbers_available	= 1,
	CPDLCUserAbortReason_duplicate_message_identification_numbers	= 2,
	CPDLCUserAbortReason_no_longer_next_data_authority	= 3,
	CPDLCUserAbortReason_current_data_authority_abort	= 4,
	CPDLCUserAbortReason_commanded_termination	= 5,
	CPDLCUserAbortReason_invalid_response	= 6
	/*
	 * Enumeration is extensible
	 */
} e_CPDLCUserAbortReason;

/* CPDLCUserAbortReason */
typedef long	 CPDLCUserAbortReason_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPDLCUserAbortReason;
asn_struct_free_f CPDLCUserAbortReason_free;
asn_struct_print_f CPDLCUserAbortReason_print;
asn_constr_check_f CPDLCUserAbortReason_constraint;
ber_type_decoder_f CPDLCUserAbortReason_decode_ber;
der_type_encoder_f CPDLCUserAbortReason_encode_der;
xer_type_decoder_f CPDLCUserAbortReason_decode_xer;
xer_type_encoder_f CPDLCUserAbortReason_encode_xer;
per_type_decoder_f CPDLCUserAbortReason_decode_uper;
per_type_encoder_f CPDLCUserAbortReason_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CPDLCUserAbortReason_H_ */
#include "asn_internal.h"
