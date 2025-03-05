#include <stdio.h>
int main() {
    int a,b,i,n=0;
    float avg,sum=0;
    printf("Input two pairs values (integer values):\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sequence from the lowest to highest number:\n");
    if(a>b){
        for(i=b;i<=a;i++){
            n++;
           printf("%d ",i);
                sum=sum+i;

        }
    }else if(b>a){
        for(i=a;i<=b;i++){
            n++;
           printf("%d ",i);
                sum=sum+i;
        }
    }
    avg=sum/n;
    printf("\nAverage value of the said sequence\n%.2f",avg);
}
