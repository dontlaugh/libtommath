/* LibTomMath, multiple-precision integer library -- Tom St Denis
 *
 * LibTomMath is library that provides for multiple-precision
 * integer arithmetic as well as number theoretic functionality.
 *
 * The library is designed directly after the MPI library by
 * Michael Fromberger but has been written from scratch with
 * additional optimizations in place.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@iahu.ca, http://libtommath.iahu.ca
 */
#include <tommath.h>

/* b = -a */
int
mp_neg (mp_int * a, mp_int * b)
{
  int     res;
  if ((res = mp_copy (a, b)) != MP_OKAY) {
    return res;
  }
  b->sign = (a->sign == MP_ZPOS) ? MP_NEG : MP_ZPOS;
  return MP_OKAY;
}