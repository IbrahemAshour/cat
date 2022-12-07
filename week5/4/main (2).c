#include <stdio.h>

void swap(int *x,int *y){
    int z=*x;
    *x=*y;
    *y= z;

}
void sort(int a[],int num){
int j=0;
    while(j<num) {
        for (int i=0; i < num-1; i++) {
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
            }
        }
    j++;
    }
}

int main() {
    int xu;
    printf("enter the number of element :");
    scanf("%d",&xu);
    int arr[xu];
    printf("Enter THe Array Element :");
    for(int i=0;i<xu;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,xu);
    printf("the element after sorting :");
    for(int i=0;i<xu;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
