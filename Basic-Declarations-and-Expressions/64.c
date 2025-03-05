#include<stdio.h>
int main(){
int n[99],i,pos=0,min=100,max=0;
float sum=0,avg;
printf("Input a positive integer:\n");
for(i=0; ;i++){
   printf("Input next positive integer: ");
   scanf("%d",&n[i]);
   if(n[i]<=0){
    break;
   }else{
   pos++;
   if(n[i]<min){
    min=n[i];
   }
   if(n[i]>max){
    max=n[i];
   }
   }
   sum=sum+n[i];
}
avg=sum/pos;
printf("Number of positive values entered is %d\n",pos);
printf("Maximum value entered is %d\n",max);
printf("Minimum value entered is %d\n",min);
printf("Average value is %.4f\n",avg);
}
