#include<stdio.h>
int comb(int n, int s, int a){
    int i,r=0;
    if(n==1){
        if(s>=a && s<=9){
            return 1;
        }else{
            return 0;
        }
    }
    for(i=a;i<=9;i++){
        r+=comb(n-1,s-i,i+1);
    }
    return r;
}

int main(){
    int n,s;
    printf("Input the number:\n");
    scanf("%d",&n);
    printf("Sum of the digits:\n");
    scanf("%d",&s);
    if(n!=0 && s!=0){
        printf("Number of combinations: %d",comb(n,s,0));
    }
}
