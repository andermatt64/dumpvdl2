/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_LegDistance_H_
#define	_LegDistance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LegDistanceEnglish.h"
#include "LegDistanceMetric.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LegDistance_PR {
	LegDistance_PR_NOTHING,	/* No components present */
	LegDistance_PR_legDistanceEnglish,
	LegDistance_PR_legDistanceMetric
} LegDistance_PR;

/* LegDistance */
typedef struct LegDistance {
	LegDistance_PR present;
	union LegDistance_u {
		LegDistanceEnglish_t	 legDistanceEnglish;
		LegDistanceMetric_t	 legDistanceMetric;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LegDistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LegDistance;

#ifdef __cplusplus
}
#endif

#endif	/* _LegDistance_H_ */
#include "asn_internal.h"
