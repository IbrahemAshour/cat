#include <stdio.h>
int sum(int *i,int *j){
    int sum=*i+*j;
    return sum;
}
int main() {
   int i,j;
   printf("Enter the Two Number :");
   scanf("%d %d",&i,&j);
   printf("The Sum Of Two Number %d + %d = %d",i,j,sum(&i,&j));
    return 0;
}
