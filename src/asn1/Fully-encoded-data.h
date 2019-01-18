/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULCS"
 * 	found in "atn-ulcs.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_Fully_encoded_data_H_
#define	_Fully_encoded_data_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "PDV-list.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Fully-encoded-data */
typedef struct Fully_encoded_data {
	NULL_t	*spare	/* OPTIONAL */;
	PDV_list_t	 data;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Fully_encoded_data_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Fully_encoded_data;

#ifdef __cplusplus
}
#endif

#endif	/* _Fully_encoded_data_H_ */
#include "asn_internal.h"
