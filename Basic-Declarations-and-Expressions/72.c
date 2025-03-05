#include<stdio.h>
int main(){
int x;
printf("Input a value (negative): ");
scanf("%d",&x);
if(x<0){
printf("Original value = %d\n",x);
printf("Absolute value = %d",-x);
}else{
printf("Input negative value");
}
}
