#include <stdio.h>
int isPrime[1000000];
int prime[999999];
int main() {
    int c=0,i,j,n;
    printf("Input a number:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
       isPrime[i]=1;
       isPrime[0]=isPrime[1]=0;
    }
    for(i=2;i<=n;i++){
        if(isPrime[i]){
            prime[c++]=i;
            for(j=2*i;j<=n;j=j+i){
                isPrime[j]=0;
            }
        }
    }
    printf("Number of prime numbers which are less than or equal to %d\n",n);
    printf("%d\n",c);
}


