#include <stdio.h>
int main() {
    int i,a[7];
    printf("Input 7 array elements:\n");
    for(i=0;i<=6;i++){
    scanf("%d",&a[i]);
    if(a[i]<=0){
        a[i]=1;
    }
    }

    printf("Array elements:\n");
       for(i=0;i<=6;i++){
           printf("array_nums[%d] = %d\n",i,a[i]);
       }
}
