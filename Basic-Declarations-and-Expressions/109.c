#include<stdio.h>
int main(){
    int x,y,i,sum_odd=0,sum_even=0;
    printf("Input a number(integer): ");
    scanf("%d",&x);
    printf("Square of each even between 1 and %d:\n",x);

     for(i=1;i<=x;i++){
         if(i%2==0){
             printf("%d^2 = %d\n",i,i*i);
         }

     }
     printf("Square of each odd between 1 and %d:\n",x);
     for(i=1;i<=x;i++){
         if(i%2!=0){
             printf("%d^2 = %d\n",i,i*i);
         }
     }

}
