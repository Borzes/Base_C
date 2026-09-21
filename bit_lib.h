#ifndef bit_lib
#define bit_lib
#include <stdio.h>
#include <stdint.h>

#define BIT_SET(x,mask)((x|mask))
#define CLEAR_BIT(x,mask)((x&~mask))
#define INV_BIT(x,mask)((x^mask))
#define L_SHIFT(x,n) (x=(x<<n))
#define R_SHIFT(x,n) (x=(x>>n))
#define L_ROLL(x,n)(x=(x<<n)|(x>>(sizeof(x)*8-n)))
#define R_ROLL(x,n)(x=(x>>n)|(x<<(sizeof(x)*8-n)))
#endif 
