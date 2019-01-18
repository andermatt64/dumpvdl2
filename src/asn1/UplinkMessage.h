/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CPDLCAPDUsVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_UplinkMessage_H_
#define	_UplinkMessage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "ATCUplinkMessage.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkMessage_PR {
	UplinkMessage_PR_NOTHING,	/* No components present */
	UplinkMessage_PR_noMessage,
	UplinkMessage_PR_aTCUplinkMessage
} UplinkMessage_PR;

/* UplinkMessage */
typedef struct UplinkMessage {
	UplinkMessage_PR present;
	union UplinkMessage_u {
		NULL_t	 noMessage;
		ATCUplinkMessage_t	 aTCUplinkMessage;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkMessage_H_ */
#include "asn_internal.h"
