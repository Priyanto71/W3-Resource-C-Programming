#include<stdio.h>
int main(){
    int a,i,x,ar[8];
    printf("Input 8 array elements:\n");
    for(i=0;i<8;i++){
    scanf("%d",&ar[i]);
    }
    printf("Modified array:\n");
     for(i = 0; i < 8; i++) {
        if(i < (8/2)) {
            x = ar[i];
            ar[i] = ar[8-(i+1)];
            ar[8-(i+1)] = x;
        }
    }

    for(i=0;i<8;i++){
        printf("array_nums[%d] = %d\n",i,ar[i]);
    }
}
