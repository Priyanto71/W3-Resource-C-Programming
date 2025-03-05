#include <stdio.h>
int main() {
    int i,n;
    printf("Input a number (integer):\n");
    scanf("%d",&n);
    printf("Remainder value is 3 after divide all numbers between 1 and 100 by %d:\n",n);
    for(i=1;i<=100;i++){
        if(i%n==3){
            printf("%d\n",i);
        }
    }
}
