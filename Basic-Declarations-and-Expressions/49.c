#include<stdio.h>
int main(){
int n[5],i,a;
printf("Input the first number of the array: ");
scanf("%d",&a);
for(i=0;i<5;i++){
    n[i]=a;
    a=a*3;

}
for(i=0;i<5;i++){
    printf("n[%d] = %d\n",i,n[i]);
}
}
