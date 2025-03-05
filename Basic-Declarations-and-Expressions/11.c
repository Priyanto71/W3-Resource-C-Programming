#include<stdio.h>
int main(){
float w1=15,w2=25,i1=5,i2=4,avg,avg1,avg2;
printf("Weight - Item1: ");
scanf("%f",&w1);
printf("No. of item1: ");
scanf("%f",&i1);
printf("Weight - Item2: ");
scanf("%f",&w2);
printf("No. of item2: ");
scanf("%f",&i2);
avg1=w1*i1;
avg2=w2*i2;
avg=(avg1+avg2)/(i1+i2);
printf("Average Value = %f",avg);
}
