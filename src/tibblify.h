#ifndef TIBBLIFY_H
#define TIBBLIFY_H

#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include "tibblify-core.h"

SEXP vec_unspecified(R_len_t n);
bool vec_is_unspecified(SEXP x);

#include "tibblify-vctrs.h"
#include "vctrs-dim.h"
#include "vctrs-utils.h"
#include "vctrs-utils-dispatch.h"

extern SEXP tibblify_ns_env;

extern SEXP classes_list_of;

extern SEXP strings_empty;
extern SEXP strings_object;

extern SEXP syms_transform;
extern SEXP syms_value;
extern SEXP syms_x;
extern SEXP syms_ptype;

extern SEXP syms_vec_is;
extern SEXP syms_vec_flatten;

struct r_string_input_form_struct {
  r_obj* rowmajor;
  r_obj* colmajor;
};
extern struct r_string_input_form_struct r_string_input_form;

struct r_string_types_struct {
  r_obj* sub;
  r_obj* row;
  r_obj* df;
  r_obj* scalar;
  r_obj* vector;
  r_obj* unspecified;
  r_obj* variant;
  r_obj* recursive;
};
extern struct r_string_types_struct r_string_types;

struct r_vector_form_struct {
  r_obj* vector;
  r_obj* scalar_list;
  r_obj* object_list;
};
extern struct r_vector_form_struct r_vector_form;

#endif
