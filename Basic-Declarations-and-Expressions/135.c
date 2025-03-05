#include<stdio.h>
int main(){
   int a,b,c,d,n,count=0;
   printf("Input a number:\n");
   scanf("%d",&n);

   if( n>=1 && n<=50){
          printf("a + b + c + d = n\n");
          for(a=0;a<=9;a++){
              for(b=0;b<=9;b++){
                  for(c=0;c<=9;c++){
                      for(d=0;d<=9;d++){
                          if(a+b+c+d==n){
                              printf("\n%d, %d, %d, %d\n",a,b,c,d);
                              count++;
                          }
                      }
                  }
              }
          }
       printf("Total number of combinations:\n");

   printf("%d",count);
}
}
