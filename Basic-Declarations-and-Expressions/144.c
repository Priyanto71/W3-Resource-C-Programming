#include<stdio.h>
int main(){
    long x;
    printf("Input number of straight lines:\n");
    scanf("%ld",&x);

    printf("Maximum number of regions obtained by drawing %ld given straight lines:\n",x);
    printf("%ld",(x*x+x+2)/2);
}

