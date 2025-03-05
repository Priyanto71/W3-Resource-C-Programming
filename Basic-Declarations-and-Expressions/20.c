#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d,x,root1,root2;
printf("Input the first number(a): ");
scanf("%f",&a);
printf("Input the second number(b): ");
scanf("%f",&b);
printf("Input the third number(c): ");
scanf("%f",&c);
d=b*b-4*a*c;
if(d<0){
printf("Not possible");
}else{
x=sqrt(d);
root1=(-b+x)/(2*a);
root2=(-b-x)/(2*a);
printf("Root1 = %f\n",root1);
printf("Root2 = %f",root2);
}
}
