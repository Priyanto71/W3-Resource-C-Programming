#include<stdio.h>
int main(){
int x=0,n,i;
printf("Input a number: ");
scanf("%d",&n);
printf("The original number= %d\n",n);
while(n>=1){
    i=n%10;
    x=x*10+i;
    n=n/10;
}
printf("The reverse of the said number= %d",x);
}
