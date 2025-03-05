#include<stdio.h>
int main(){
    int i,n;
float sum=0;
printf("Input any number: ");
scanf("%d",&n);
printf("1+");
for(i=2;i<=n-1;i++){
    printf("1/%d+",i);
}
printf("1/%d",n);
for(i=1;i<=n;i++){
    sum=sum+(1.0/i);
}

if(n==0){
    printf("\nSum= 1/0");
}else{
printf("\nSum= %.1f",sum);
}
