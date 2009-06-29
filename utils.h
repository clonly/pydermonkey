#ifndef PYM_UTILS_H
#define PYM_UTILS_H

#include "context.h"

#include <jsapi.h>
#include <jsdhash.h>
#include <Python/Python.h>

typedef struct {
  JSDHashEntryStub base;
  void *value;
} PYM_HashEntry;

extern PyObject *PYM_error;

extern PyObject *
PYM_jsvalToPyObject(PYM_JSContextObject *context, jsval value);

#endif