#include <stdio.h>
int main() {
    int i,a;
    printf("Input a number (integer value):\n");
    scanf("%d",&a);
    printf("All positive divisors of %d\n",a);
       for(i=1;i<=a;i++){
           if(a%i==0){
           printf("%d\n",i);
       }
}
}

