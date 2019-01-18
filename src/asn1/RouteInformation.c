/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "RouteInformation.h"

static asn_per_constraints_t asn_PER_type_RouteInformation_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RouteInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RouteInformation, choice.publishedIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PublishedIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"publishedIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RouteInformation, choice.latitudeLongitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LatitudeLongitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitudeLongitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RouteInformation, choice.placeBearingPlaceBearing),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PlaceBearingPlaceBearing,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"placeBearingPlaceBearing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RouteInformation, choice.placeBearingDistance),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PlaceBearingDistance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"placeBearingDistance"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RouteInformation, choice.aTSRouteDesignator),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ATSRouteDesignator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aTSRouteDesignator"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RouteInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* publishedIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* placeBearingPlaceBearing */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* placeBearingDistance */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* aTSRouteDesignator */
};
static asn_CHOICE_specifics_t asn_SPC_RouteInformation_specs_1 = {
	sizeof(struct RouteInformation),
	offsetof(struct RouteInformation, _asn_ctx),
	offsetof(struct RouteInformation, present),
	sizeof(((struct RouteInformation *)0)->present),
	asn_MAP_RouteInformation_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RouteInformation = {
	"RouteInformation",
	"RouteInformation",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_RouteInformation_constr_1,
	asn_MBR_RouteInformation_1,
	5,	/* Elements count */
	&asn_SPC_RouteInformation_specs_1	/* Additional specs */
};

