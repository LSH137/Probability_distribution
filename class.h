#pragma once
#include <string>
#include <cstdio>
#include <gmp.h>
#include <mpfr.h>
#include "constant.h"

class var
{
    public:

    var()
    {
        mpfr_init2(mem, precision);
        mpfr_set_zero(mem, MPFR_RNDN);
    }
    ~var() = default;

    mpfr_t mem;

    void fprint(FILE* fp)
    {
        if(fp != nullptr)
            mpfr_out_str(fp, 10, 20, mem, MPFR_RNDN);
    }

    void read()
    {
        mpfr_inp_str(mem, stdin, 10, MPFR_RNDN);
        fflush(stdin);
    }

    void erase()
    {
        mpfr_clear(mem);
    }
};

var plus(var m1, var m2);

var sub(var m1, var m2);

var sub_d(long int n, var m1);

var mul(var m1, var m2);

var mul_d(var m1, double m2);

var div(var m1, var m2);

var div_d(var m1, double m2);

var sqar(var m);

void eqr(var & m1, var m2);

void eqr_d(var & m1, double m2);

var cos(var m);

var sin(var m);

var factorial(unsigned long int m);

var power(var m, var n);
