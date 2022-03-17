/**
 * \file fknm.h
 * \author Jesse Haviland
 *
 */

#ifndef _fknm_h_
#define _fknm_h_

#include <Python.h>
#include <numpy/arrayobject.h>

// forward defines
static PyObject *IK(PyObject *self, PyObject *args);
static PyObject *Robot_link_T(PyObject *self, PyObject *args);
static PyObject *ETS_hessian0(PyObject *self, PyObject *args);
static PyObject *ETS_hessiane(PyObject *self, PyObject *args);
static PyObject *ETS_jacob0(PyObject *self, PyObject *args);
static PyObject *ETS_jacobe(PyObject *self, PyObject *args);
static PyObject *ETS_fkine(PyObject *self, PyObject *args);
static PyObject *ET_init(PyObject *self, PyObject *args);
static PyObject *ET_update(PyObject *self, PyObject *args);
static PyObject *ET_T(PyObject *self, PyObject *args);
static PyObject *r2q(PyObject *self, PyObject *args);
int _check_array_type(PyObject *toCheck);

void rx(npy_float64 *data, double eta);
void ry(npy_float64 *data, double eta);
void rz(npy_float64 *data, double eta);
void tx(npy_float64 *data, double eta);
void ty(npy_float64 *data, double eta);
void tz(npy_float64 *data, double eta);

#endif