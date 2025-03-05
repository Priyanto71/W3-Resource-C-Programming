#include<stdio.h>
int main(){
int n[5],a,sum=0;
printf("Input the first number: ");
scanf("%d",&n[0]);
printf("Input the second number: ");
scanf("%d",&n[1]);
printf("Input the third number: ");
scanf("%d",&n[2]);
printf("Input the forth number: ");
scanf("%d",&n[3]);
printf("Input the fifth number: ");
scanf("%d",&n[4]);
for(a=0;a<=4;a++){
    if(n[a]%2!=0){
        sum=sum+n[a];
    }

}
printf("Sum of all odd values: %d",sum);
}
