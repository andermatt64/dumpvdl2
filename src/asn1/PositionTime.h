/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_PositionTime_H_
#define	_PositionTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Position.h"
#include "Time.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PositionTime */
typedef struct PositionTime {
	Position_t	 position;
	Time_t	 time;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionTime;

#ifdef __cplusplus
}
#endif

#endif	/* _PositionTime_H_ */
#include "asn_internal.h"
