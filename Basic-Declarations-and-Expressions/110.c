#include<stdio.h>
int main(){
    int x;
    printf("Input a number (integer):\n");
    scanf("%d",&x);
    if(x>0 && x%2==0){
        printf("Number is positive-even");
    }else if(x>0 && x%2!=0){
        printf("Number is positive-odd");
    }else if(x<0 && x%2==0){
        printf("Number is negative-even");
    }else if(x<0 && x%2!=0){
        printf("Number is negative-odd");
    }else{
        printf("Number is Zero");
    }

}
