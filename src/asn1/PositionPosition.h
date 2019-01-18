/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_PositionPosition_H_
#define	_PositionPosition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Position;

/* PositionPosition */
typedef struct PositionPosition {
	A_SEQUENCE_OF(struct Position) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionPosition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionPosition;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Position.h"

#endif	/* _PositionPosition_H_ */
#include "asn_internal.h"
