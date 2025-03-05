#include <stdio.h>
int main() {
    int i,a,b,sum=0;
    printf("Input two numbers(integer):\n");

    scanf("%d",&a);
    scanf("%d",&b);
   if(a>b){
       for(i=b;i<=a;i++){
           if(i%7!=0){
               sum=sum+i;
           }
       }
   }
   if(b>a){
       for(i=a;i<=b;i++){
           if(i%7!=0){
               sum=sum+i;
           }
       }
   }
   printf("Sum of all numbers between said numbers (inclusive) not divisible by 7:\n%d",sum);
}
