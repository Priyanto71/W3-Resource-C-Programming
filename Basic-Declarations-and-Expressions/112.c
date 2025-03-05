#include <stdio.h>
int main() {
    int i,n[6],max=0,c=0;
    printf("Input 6 numbers (integer values):\n");
    for(i=1;i<7;i++){
    scanf("%d",&n[i]);
    if(n[i]>max){
        max=n[i];
        c=i;
    }
    }
    printf("Maximum value: %d\n",max);
            printf("Position: %d\n",c);
}
