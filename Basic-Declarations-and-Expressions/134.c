#include<stdio.h>
int main(){
   int a,b,c;
   printf("Input the three sides of a triangle:\n");
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a)){
       printf("It is a right angle triangle!\n");
   }else{
   printf("It is not a right angle triangle!\n");
}
}

