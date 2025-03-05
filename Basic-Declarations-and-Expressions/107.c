#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("Input an integer number:\n");
    scanf("%d",&n);
     printf("Next 10 consecutive odd numbers:\n");
     for(i=n+1;c<10;i++){
         if(i%2!=0){
             c++;
             printf("%d, ",i);
         }

     }
     c=0;
    printf("\nNext 10 consecutive even numbers:\n");
    for(i=n+1;c<10;i++)
    if(i%2==0){
        c++;
            printf("%d, ",i);
    }




}
