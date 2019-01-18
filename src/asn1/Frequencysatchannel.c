/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "Frequencysatchannel.h"

static const int permitted_alphabet_table_1[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/* .                */
 2, 3, 4, 5, 6, 7, 8, 9,10,11, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
};
static const int permitted_alphabet_code2value_1[11] = {
32,48,49,50,51,52,53,54,55,56,57,};


static int check_permitted_alphabet_1(const void *sptr) {
	const int *table = permitted_alphabet_table_1;
	/* The underlying type is NumericString */
	const NumericString_t *st = (const NumericString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

int
Frequencysatchannel_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const NumericString_t *st = (const NumericString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 12)
		 && !check_permitted_alphabet_1(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_Frequencysatchannel_1_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_1)/sizeof(permitted_alphabet_table_1[0]))
		return -1;
	return permitted_alphabet_table_1[value] - 1;
}
static int asn_PER_MAP_Frequencysatchannel_1_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_1)/sizeof(permitted_alphabet_code2value_1[0]))
		return -1;
	return permitted_alphabet_code2value_1[code];
}
/*
 * This type is implemented using NumericString,
 * so here we adjust the DEF accordingly.
 */
static void
Frequencysatchannel_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NumericString.free_struct;
	td->print_struct   = asn_DEF_NumericString.print_struct;
	td->check_constraints = asn_DEF_NumericString.check_constraints;
	td->ber_decoder    = asn_DEF_NumericString.ber_decoder;
	td->der_encoder    = asn_DEF_NumericString.der_encoder;
	td->xer_decoder    = asn_DEF_NumericString.xer_decoder;
	td->xer_encoder    = asn_DEF_NumericString.xer_encoder;
	td->uper_decoder   = asn_DEF_NumericString.uper_decoder;
	td->uper_encoder   = asn_DEF_NumericString.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NumericString.per_constraints;
	td->elements       = asn_DEF_NumericString.elements;
	td->elements_count = asn_DEF_NumericString.elements_count;
	td->specifics      = asn_DEF_NumericString.specifics;
}

void
Frequencysatchannel_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
Frequencysatchannel_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
Frequencysatchannel_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
Frequencysatchannel_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
Frequencysatchannel_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
Frequencysatchannel_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
Frequencysatchannel_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
Frequencysatchannel_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	Frequencysatchannel_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_Frequencysatchannel_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  32,  57 }	/* (32..57) */,
	{ APC_CONSTRAINED,	 0,  0,  12,  12 }	/* (SIZE(12..12)) */,
	asn_PER_MAP_Frequencysatchannel_1_v2c,	/* Value to PER code map */
	asn_PER_MAP_Frequencysatchannel_1_c2v	/* PER code to value map */
};
static const ber_tlv_tag_t asn_DEF_Frequencysatchannel_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (18 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Frequencysatchannel = {
	"Frequencysatchannel",
	"Frequencysatchannel",
	Frequencysatchannel_free,
	Frequencysatchannel_print,
	Frequencysatchannel_constraint,
	Frequencysatchannel_decode_ber,
	Frequencysatchannel_encode_der,
	Frequencysatchannel_decode_xer,
	Frequencysatchannel_encode_xer,
	Frequencysatchannel_decode_uper,
	Frequencysatchannel_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Frequencysatchannel_tags_1,
	sizeof(asn_DEF_Frequencysatchannel_tags_1)
		/sizeof(asn_DEF_Frequencysatchannel_tags_1[0]), /* 1 */
	asn_DEF_Frequencysatchannel_tags_1,	/* Same as above */
	sizeof(asn_DEF_Frequencysatchannel_tags_1)
		/sizeof(asn_DEF_Frequencysatchannel_tags_1[0]), /* 1 */
	&asn_PER_type_Frequencysatchannel_constr_1,
	0, 0,	/* No members */
	0	/* No specifics */
};

