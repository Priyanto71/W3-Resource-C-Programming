#include<stdio.h>
int main(){
double a;
 int b,c;
printf("Input the currency value (floating point with two decimal places):\n");
scanf("%lf",&a);
b=(int) a;
a=a-b;
c= a*100;
printf("Currency Notes:\n");
printf("100 number of Note(s): %d\n",b/100);
b=b-(b/100)*100;
if(b>=50){
printf("50 number of Note(s): %d\n",b/50);
b=b-(b/50)*50;
}if(b>=20){
printf("20 number of Note(s): %d\n",b/20);
b=b-(b/20)*20;
}if(b>=10){
printf("10 number of Note(s): %d\n",b/10);
b=b-(b/10)*10;
}if(b>=5){
printf("5 number of Note(s): %d\n",b/5);
b=b-(b/5)*5;
}if(b>1){
printf("2 number of Note(s): %d\n",b/2);
b=b-(b/2)*2;
}if(b>0){
printf("1 number of Note(s): %d\n",b);
}
printf("\n\n");
printf("Currency Coins:\n");
if(c>=50){
printf(".50 number of Coin(s): %d\n",c/50);
c=c-(c/50)*50;
}if(c>=25){
printf(".25 number of Coin(s): %d\n",c/25);
c=c-(c/25)*25;
}if(c>=10){
printf(".10 number of Coin(s): %d\n",c/10);
c=c-(c/10)*10;
}if(c>=5){
printf(".5 number of Coin(s): %d\n",c/5);
c=c-(c/5)*5;
}if(c>=1){
printf(".1 number of Coin(s): %d\n",c);
}
}
