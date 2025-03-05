#include<stdio.h>
int main(){
    int h1,h2,t;
    printf("Input two adjoined sides of the parallelogram:\n");
    scanf("%d",&h1);
    scanf("%d",&h2);
    printf("\nInput the diagonal of the parallelogram:\n");
    scanf("%d",&t);
    if(t*t==h1*h1+h2*h2){
        printf("This is a rectangle.");
    }else if(h1==h2){
        printf("This is a rhombus.");
    }
}

