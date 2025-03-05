#include <stdio.h>
int main(){
double x1,y1,x2,y2,x3,y3,x4,y4;
int i,n;
printf("Input P(x1,y1):\n");
scanf("%ld%ld",&x1,&y1);
printf("Input P(x2,y2):\n");
scanf("%ld%ld",&x2,&y2);
printf("Input P(x3,y3):\n");
scanf("%ld%ld",&x3,&y3);
printf("Input P(x4,y4):\n");
scanf("%ld%ld",&x4,&y4);
if((x1==x2) && (x3==x4)){
    printf("\nPQ and RS are parallel!\n");
}else if((x1==x2) || (x3==x4)){
    printf("\nPQ and RS are not parallel!\n");
} else if (((y1 - y2) / (x1 - x2) - (y3 - y4) / (x3 - x4)) == 0){
    printf("\nPQ and RS are parallel!\n");
}
else{
    printf("\nPQ and RS are not parallel!\n");
}
}
