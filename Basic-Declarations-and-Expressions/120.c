#include <stdio.h>
int main() {
    int i,a;
    printf("Input a number(integer):\n");

    scanf("%d",&a);
    printf("Sequence:\n");
       for(i=1;i<=a-1;i++){
           printf("%d,",i);
       }
       printf("%d",a);
}
