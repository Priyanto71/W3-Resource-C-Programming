#include<stdio.h>
int main(){
    int i;
    float a,j,ar[10];
    printf("Input the first element of the array:\n");
    scanf("%f",&a);
    printf("Array elements:\n");
    for(i=0,j=a;i<10;j=j/3){
        ar[i]=j;
        i++;
    }
    for(i=0;i<10;i++){
        printf("array_nums[%d] = %.4f\n",i,ar[i]);
    }
}
