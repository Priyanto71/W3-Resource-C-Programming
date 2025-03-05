#include <stdio.h>
int main() {
    int a,b,i,sum=0;
    printf("Input two numbers (integer values):\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        for(i=b;i<=a;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        printf("Sum of all even values between %d and %d\n%d",b,a,sum);
    }else if(b>a){
        for(i=a;i<=b;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        printf("Sum of all even values between %d and %d\n%d",a,b,sum);
    }

}

