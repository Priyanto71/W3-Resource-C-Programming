#include<stdio.h>
int main(){
int n,a,b;
printf("Mx ");
for(n=0;n<=10;n++){
    printf("%d ",n);
}
printf("\n----------------------------------------------------------\n");
n=0;
do{
    a=0,b=1;
    printf("%d ",n);
    while(a<=n){
        if(a==0 || n==0){
            printf("%d ",b);
        }else {
         b = b * (n - a + 1) / a;
         printf("%d ",b);
        }
        a=a+1;
    }
    printf("\n");
    n=n+1;
}while(n<=10);
printf("----------------------------------------------------------");



}
