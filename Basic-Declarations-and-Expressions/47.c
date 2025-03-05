#include<stdio.h>
int main(){
int n,i;
printf("Input an integer: ");
scanf("%d",&n);
printf("All the divisor of 45 are:\n");
for(i=1;i<=n;i++){
    if(n%i==0){
        printf("%d\n",i);
    }
}



}
