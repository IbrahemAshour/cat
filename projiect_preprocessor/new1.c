#include<stdio.h>
#include"math.h"
#define number 15
#define bitnumber 3
int main(){
	printf("%d\n",SET(number,bitnumber));

	printf("%d\n",GET(number,bitnumber));
	printf("%d\n",TOGGLE(number,bitnumber));
	printf("%d\n",CLEAR(number,bitnumber));
	return 0;
}