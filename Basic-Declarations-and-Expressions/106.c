#include<stdio.h>
int main(){
    int i, n[7],even=0,odd=0,pos=0,neg=0;
    printf("Input 7 integers:\n");
    for(i=0;i<=6;i++){
        scanf("%d",&n[i]);
        if(n[i]>0){
            pos++;
        }else if(n[i]<0){
            neg++;
        }
        if(n[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Number of even values: %d\n",even);
    printf("Number of odd values: %d\n",odd);
    printf("Number of positive values: %d\n",pos);
    printf("Number of negative values: %d\n",neg);

}
