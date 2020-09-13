#include "class.h"
#include <string>
#include <cmath>
#include <cstdio>
#include <gmp.h>
#include <mpfr.h>

var plus(var m1, var m2)
{
    var result;
    mpfr_add(result.mem, m1.mem, m2.mem, MPFR_RNDN);
    return result;
}

var sub(var m1, var m2)
{
    var result;
    mpfr_sub(result.mem, m1.mem, m2.mem, MPFR_RNDN);
    return result;

}

var sub_d(long int n, var m1)
{
    var result;
    mpfr_si_sub(result.mem, n, m1.mem, MPFR_RNDN);
    return result;
}

var mul(var m1, var m2)
{
    var result;
    mpfr_mul(result.mem, m1.mem, m2.mem, MPFR_RNDN);
    return result;
}

var mul_d(var m1, double m2)
{
    var result;
    mpfr_mul_d(result.mem, m1.mem, m2, MPFR_RNDN);
    return result;
}

var div(var m1, var m2)
{
    var result;
    mpfr_div(result.mem, m1.mem, m2.mem, MPFR_RNDN);
    return result;
}

var div_d(var m1, double m2)
{
    var result;
    mpfr_div_d(result.mem, m1.mem, m2, MPFR_RNDN);
    return result;
}

var sqar(var m)
{
    var result;
    mpfr_sqrt(result.mem, m.mem, MPFR_RNDN);
    return result;
}

void eqr(var & m1, var m2)
{
    mpfr_set(m1.mem, m2.mem, MPFR_RNDN);
}

void eqr_d(var & m1, double m2)
{
    mpfr_set_d(m1.mem, m2, MPFR_RNDN);
}

var cos(var m)
{
    var result;
    mpfr_cos(result.mem, m.mem, MPFR_RNDN);
    return result;
}

var sin(var m)
{
    var result;
    mpfr_sin(result.mem, m.mem, MPFR_RNDN);
    return result;
}

var factorial(unsigned long int m)
{
    var result;
    mpfr_fac_ui(result.mem, m, MPFR_RNDN);
    return result;
}

var power(var m, var n)
{
    var result;
    mpfr_pow(result.mem, m.mem, n.mem, MPFR_RNDN);
    return result;
}
