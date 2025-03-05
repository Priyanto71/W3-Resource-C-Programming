#include<stdio.h>
int main(){
    int x,y,i,sum_odd=0,sum_even=0;
    printf("Input the first integer number:\n");
    scanf("%d",&x);

     printf("Input the second integer number (greater than first integer):\n");
     scanf("%d",&y);

     for(i=x;i<=y;i++){
         if(i%2!=0){
             sum_odd+=i;
         }else{
             sum_even+=i;
         }

     }
    printf("Sum of all odd values between %d and %d:\n%d\n",x,y,sum_odd);
    printf("Sum of all even values between %d and %d:\n%d\n",x,y,sum_even);
}
