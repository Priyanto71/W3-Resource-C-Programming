#include<stdio.h>
#include<math.h>
int main(){
float x,n,result;
printf("Input the values of x and n: ");
scanf("%f%f",&x,&n);
result=pow(x,n);
printf("x=%f; n=%f;\n",x,n);
printf("x to power n=%f",result);
}
