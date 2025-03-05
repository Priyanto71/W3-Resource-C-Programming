#include<stdio.h>
int main(){
int a[5];
int n,neg=0,pos=0;
printf("Input the first number: ");
scanf("%d",&a[0]);
printf("Input the second number: ");
scanf("%d",&a[1]);
printf("Input the third number: ");
scanf("%d",&a[2]);
printf("Input the forth number: ");
scanf("%d",&a[3]);
printf("Input the fifth number: ");
scanf("%d",&a[4]);
for(n=0;n<=4;n++){
if(a[n]>0){
pos++;
}else if(a[n]<0){
neg++;
}
}
printf("Number of positive numbers: %d\n",pos);
printf("Number of negative numbers: %d",neg);
}
