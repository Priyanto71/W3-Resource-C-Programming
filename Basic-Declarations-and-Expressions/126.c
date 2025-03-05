#include <stdio.h>
int main() {
    int i;
    float a[7];
    printf("Input 7 array elements:\n");
    for(i=0;i<=6;i++){
    scanf("%f",&a[i]);
    }

    printf("Array positions that store a value less or equal to 0:\n");
       for(i=0;i<=6;i++){
           if(a[i]<=0){
           printf("array_nums[%d] = %.1f",i,a[i]);
       }
}
}

