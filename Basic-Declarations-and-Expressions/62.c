#include<stdio.h>
int main(){
int x,i,n,a,b,sum;
printf("Input a positive number less than 500: ");
scanf("%d",&n);
if(n>=500){
    printf("Invalid Input");
}else{
    b=n;
    i=n%10;
    n=n/10;
    x=n%10;
    n=n/10;
    a=n%10;
sum=i+x+a;

printf("Sum of the digits of %d is %d",b,sum);
}
}
