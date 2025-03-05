#include <stdio.h>

int main() {
    int m,n,i,j,sum=0;
    printf("Input two integes (m, n):\n");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Sum of %d even numbers starting from %d:\n",n,m);
    for(j=0,i=m;j<n;i++){
        if(i%2==0){
            sum=sum+i;
            j++;
        }
    }
    printf("%d",sum);
}
