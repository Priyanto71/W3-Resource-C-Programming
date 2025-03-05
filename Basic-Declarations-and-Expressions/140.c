#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(void){
int n,i,num[101]={0},max=0;
printf("Input the terms of the sequence:\n");
while(scanf("%d",&n)!=EOF){
    num[n]++;
    for(i=1;i<=100;i++){
        if(num[i]>max){
            max=num[i];
        }
    }

}
printf("Mode values of the said sequence in ascending order:\n");
for(i=1;i<=100;i++){
    if(max==num[i]){
        printf("%d\n",i);
    }
}
}
