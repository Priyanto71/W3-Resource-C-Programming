#include <stdio.h>
int main(){
int i,j,n;
long a[5000];
long long x,max;
printf("Input number of terms in the sequence:\n");
scanf("%d",&n);
printf("Input the terms of the said sequence:\n");
for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
    max=a[0];
    x=0;
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        x=x+a[j];
        if(x>max){
            max=x;
        }
    }
    x=0;
}
printf("Maximum sum of a contiguous subsequence:\n");
  printf("%lld\n", max);
}
