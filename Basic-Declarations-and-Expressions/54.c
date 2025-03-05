#include<stdio.h>
#define P 0.393701
int main(){
float cm,inches;
printf("Input the distance in cm: ");
scanf("%f",&cm);
inches=cm*P;
printf("Distance of %f cms is = %.2f inches",cm,inches);



}
