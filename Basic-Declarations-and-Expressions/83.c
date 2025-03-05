#include<stdio.h>
int main(){
int x,n=0,i=0;
printf("Input a number: ");
scanf("%d",&x);
if(x<0 || x>10000000){
    printf("Invalid value");
}else{
while(x>0){
    i=x%10;
    x=x/10;
    if(i==3){
        n++;
    }
}
printf("The number of threes in the said number is %d",n);
}
}
