#include<stdio.h>
int main(){
    int a,i,x,n,ar[10];
    printf("Input an integer (2-10)\n");
    scanf("%d",&x);
    printf("Modified array:\n");
     if(x>=2 && x<=10){
         n=0;
         for(i=0;i<10;i++){
             ar[i]=n;
             n++;
             if(n==x){
                 n=0;
             }
         }


    for(i=0;i<10;i++){
        printf("array_nums[%d] = %d\n",i,ar[i]);
    }
}
}
