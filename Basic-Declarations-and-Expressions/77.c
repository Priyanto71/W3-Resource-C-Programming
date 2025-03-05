#include<stdio.h>
int main(){
float p,i,r,d;
printf("Input loan amount (0 to quit): ");
scanf("%f",&p);
while(p!=0){
printf("Input interest rate: ");
scanf("%f",&r);
printf("Input term of the loan in days: ");
scanf("%f",&d);
i=p*r*(d/365);
printf("The interest amount is %f\n",i);
printf("Input loan principal_amt (0 to quit): ");
scanf("%f",&p);
}
}
