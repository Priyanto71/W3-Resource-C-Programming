#include<stdio.h>
int main(){
    int a,i,j,ar[7];
    printf("Input the first element of the array:\n");
    scanf("%d",&a);
    printf("Array elements:\n");
    for(i=0,j=a;i<7;j=j*2){
        ar[i]=j;
        i++;
    }
    for(i=0;i<7;i++){
        printf("array_nums[%d] = %d\n",i,ar[i]);
    }
}
