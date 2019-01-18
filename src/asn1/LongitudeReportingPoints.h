/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_LongitudeReportingPoints_H_
#define	_LongitudeReportingPoints_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LongitudeDirection.h"
#include "LongitudeDegrees.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LongitudeReportingPoints */
typedef struct LongitudeReportingPoints {
	LongitudeDirection_t	 longitudeDirection;
	LongitudeDegrees_t	 longitudeDegrees;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LongitudeReportingPoints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LongitudeReportingPoints;

#ifdef __cplusplus
}
#endif

#endif	/* _LongitudeReportingPoints_H_ */
#include "asn_internal.h"
