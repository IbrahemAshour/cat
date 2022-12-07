#include <stdio.h>


int swap(int *x,int *y,int *z) {
    *z=*x;
    *x=*y;
    *y=*z;

}


int main() {
    int x,y,z;
    printf("Enter X - Y - Z  : ");
    scanf("%d%d%d",&x,&y,&z);
    int*px=&x,*py=&y,*pz=&z;
    printf("X= %d  _  Y= %d  _  Z= %d  :\n",x,y,z);
    printf("PX= %p  _  PY= %p  _  PZ= %p  :\n",px,py,pz);
    printf("*PX= %d  _  *PY= %d  _  *PZ= %d  :\n",*px,*py,*pz);
    printf("SWAPPING POINTERS \n");
    swap(&px,&py,&pz);
    printf("X= %d  _  Y= %d  _  Z= %d  :\n",x,y,z);
    printf("PX= %p  _  PY= %p  _  PZ= %p  :\n",px,py,pz);
    printf("*PX= %d  _  *PY= %d  _  *PZ= %d  :\n",*px,*py,*pz);

    return 0;
}
