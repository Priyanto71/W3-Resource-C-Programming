#include<stdio.h>
int main(){
    float n[7],sum_pos=0,sum_neg=0,avg_pos,avg_neg;
    int i,pos=0,neg=0;
    printf("Input 7 numbers(int/float):\n");
    for(i=0;i<=6;i++){
        scanf("%f",&n[i]);
        if(n[i]>0){
            pos++;
            sum_pos=sum_pos+n[i];
        }else if(n[i]<0){
            neg++;
            sum_neg=sum_neg+n[i];
        }
    }
    avg_pos=sum_pos/pos;
    avg_neg=sum_neg/neg;
   printf("\n%d Number of positive numbers: Average %.2f\n",pos,avg_pos);
   printf("%d Number of negative numbers: Average %.2f",neg,avg_neg);
}
