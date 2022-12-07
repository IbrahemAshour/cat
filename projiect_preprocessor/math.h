#ifndef MATH_H
#define MATH_H
#define SET(number,bitnumber) number|(bitnumber<<1)
#define CLEAR(number,bitnumber) number&(~bitnumber<<1)
#define GET(number,bitnumber) ((number>>bitnumber)&1)
#define TOGGLE(number,bitnumber) (number^(1<<bitnumber))
#endif