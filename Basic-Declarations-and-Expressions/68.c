#include<stdio.h>
#include<math.h>
int main(){
 long b;
 int a;
 double c;
 printf("=======================================\n");
 printf("n 2 to power n 2 to power -n\n");
 printf("=======================================\n");
 for(a=0;a<=10;a++){
    b=pow(2,a);
    c=pow(2,-a);
    printf("%d %d %.12lf\n",a,b,c);
 }
 printf("======================================");





}
