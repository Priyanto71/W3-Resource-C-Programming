#include <stdio.h>
int main() {
    float a,b;
    printf("Input two integer values:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(b==0){
        printf("Division not possible");
    }else{
        printf("Result: %.2f",a/b);
    }
}

