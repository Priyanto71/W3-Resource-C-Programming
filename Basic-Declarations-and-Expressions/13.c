#include<stdio.h>
int main(){
int a,b,c;
printf("Input the first integer: ");
scanf("%d",&a);
printf("Input the second integer: ");
scanf("%d",&b);
printf("Input the third integer: ");
scanf("%d",&c);
if(a>b && a>c){
    printf("Maximum value of three integers: %d",a);
}else if(b>a && b>c){
    printf("Maximum value of three integers: %d",b);
}else{
 printf("Maximum value of three integers: %d",c);
}
}
