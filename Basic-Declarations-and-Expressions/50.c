#include<stdio.h>
int main(){
    int i;
float A[5],a;
printf("Input the 5 members of the array:\n");
for(i=0;i<5;i++){
    scanf("%f",&a);
A[i]=a;
}
for(i=0;i<5;i++){
    if(A[i]<5){
    printf("A[%d] = %.1f\n",i,A[i]);
 }
}
}
