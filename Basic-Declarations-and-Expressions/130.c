#include<stdio.h>
int main(){
    int a,i,min=100,pos;
    printf("Input the array size:\n");
    scanf("%d",&a);
     int ar[a];
     printf("Input array elements:\n");
     for(i=0;i<a;i++){
         scanf("%d",&ar[i]);
         if(ar[i]<min){
             min=ar[i];
             pos=i;
         }
     }
     printf("Smallest Value: %d\n",min);
     printf("Position within array: %d",pos);
}
