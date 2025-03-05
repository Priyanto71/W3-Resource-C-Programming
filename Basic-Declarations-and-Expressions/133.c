#include<stdio.h>
int main(){
   int a,b,sum,c=0;
   printf("Input two integer values:\n");
   scanf("%d",&a);
   scanf("%d",&b);
   sum=a+b;
   while(sum!=0){
       if(sum>0){
           sum=sum/10;
           c++;
       }
   }
   printf("Number of digits of the sum value of the said numbers:\n");
   printf("%d",c);
}

