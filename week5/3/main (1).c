#include <stdio.h>


int multibication(int a[],int a2[],int num) {
    int sum=0;
for (int i=0;i<num;i++){
    sum+=(a[i]*a2[i]);
}
    return sum;
}

int main() {
    int xu;
    printf("enter the number of element :");
    scanf("%d",&xu);
    int arr[xu],arr2[xu];
    printf("Enter The first Array Element(%d element) :",xu);
    for(int i=0;i<xu;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter The second Array Element(%d element) :",xu);
    for(int i=0;i<xu;i++){
        scanf("%d",&arr2[i]);
    }
    printf("the sum is : %d",multibication(arr,arr2,xu));


    return 0;
}
