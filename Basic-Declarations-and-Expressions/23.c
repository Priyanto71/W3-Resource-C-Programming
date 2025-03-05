#include<stdio.h>
int main(){
float a,b,c,perimeter;
printf("Input the first number: ");
scanf("%f",&a);
printf("Input the second number: ");
scanf("%f",&b);
printf("Input the third number: ");
scanf("%f",&c);
if(a,b,c>0 && a+b>c && a+c>b && b+c>a){
perimeter=a+b+c;
printf("Perimeter= %.1f",perimeter);
}else{
printf("Triangle not possible");
}
}
