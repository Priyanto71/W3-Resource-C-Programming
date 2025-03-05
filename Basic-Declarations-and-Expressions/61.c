#include<stdio.h>
#include<math.h>
int main(){
float x,value;
 printf("Input value of x: ");
 scanf("%f",&x);
 value=sin(1/x);
 if(x==0){
    printf("X cannot be 0");
 }else{
 printf("Value of sin(1/x) is %.4f",value);
 }
}
