#include<stdio.h>
int main(){
float n[5];
int a,pos=0;
float sum=0;
printf("Input the first number: ");
scanf("%f",&n[0]);
printf("Input the second number: ");
scanf("%f",&n[1]);
printf("Input the third number: ");
scanf("%f",&n[2]);
printf("Input the forth number: ");
scanf("%f",&n[3]);
printf("Input the fifth number: ");
scanf("%f",&n[4]);
for(a=0;a<=4;a++){
    if(n[a]>0){
        sum=sum+n[a];
        pos++;
    }
}
printf("Number of positive numbers: %d\n",pos);
printf("Average value of the said positive numbers: %.2f",sum/pos);
}
