#include<stdio.h>
int main(){
int i,x,y,sum=0;
printf("Input first number of the pair: ");
scanf("%d",&x);
printf("Input second number of the pair: ");
scanf("%d",&y);
printf("List of odd numbers: ");
for(i=y;i<=x;i++){
    if(i%2!=0){
        printf("%d\n",i);
        sum=sum+i;
    }
}
printf("Sum=%d",sum);




}
