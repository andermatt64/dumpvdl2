/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_TimeLevel_H_
#define	_TimeLevel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Time.h"
#include "Level.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TimeLevel */
typedef struct TimeLevel {
	Time_t	 time;
	Level_t	 level;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeLevel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeLevel;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeLevel_H_ */
#include "asn_internal.h"
