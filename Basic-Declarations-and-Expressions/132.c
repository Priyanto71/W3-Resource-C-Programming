#include<stdio.h>
int main(){
    int height[8],i,j,h,max;
    printf("Input heights(integer values) of the top eight buildings:\n");
    for(i=0;i<8;i++){
    scanf("%d",&height[i]);
}
for(i=0;i<8;i++){
    max=i;
    for(j=i;j<8;j++){
        if(height[j]>height[max]){
            max=j;
        }
    }
    h=height[max];
    height[max]=height[i];
    height[i]=h;
}
printf("Heights of the top three building:\n");
printf("%d\n%d\n%d\n",height[0],height[1],height[2]);
}
