#include<stdio.h>
int main(){
    int x,y;
    printf("Input two integers:\n");
    scanf("%d%d",&x,&y);
    if(x%y==0 || y%x==0){
        printf("Multiplies");
    }else{
        printf("Not Multiplies");
    }

}
