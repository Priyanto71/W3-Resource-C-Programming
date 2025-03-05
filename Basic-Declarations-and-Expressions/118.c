#include <stdio.h>
int main() {
    float mark[5],sum=0,m=0,avg;
    int i;
    printf("Input five subject marks(0-100):\n");
    for(i=0;i<5;i++){

    scanf("%f",&mark[i]);
    if(mark[i]<0 || mark[i]>100){
        return 0;
    }
    m++;
    sum=sum+mark[i];
    }
   avg=sum/m;
   printf("Average marks = %.2f",avg);
}
