/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ATWLevel_H_
#define	_ATWLevel_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ATWLevelTolerance.h"
#include "Level.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ATWLevel */
typedef struct ATWLevel {
	ATWLevelTolerance_t	 atw;
	Level_t	 level;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ATWLevel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ATWLevel;

#ifdef __cplusplus
}
#endif

#endif	/* _ATWLevel_H_ */
#include "asn_internal.h"
