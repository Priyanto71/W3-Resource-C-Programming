#include<stdio.h>
int main(){
int x;
printf("Input an integer: ");
scanf("%d",&x);
if(x>0 && x%2==0){
    printf("Positive Even");
}else if(x>0 && x%2!=0){
    printf("Positive Odd");
}else if(x<0 && x%2==0){
    printf("Negative Even");
}else if(x<0 && x%2!=0){
    printf("Negative Odd");
}else {
printf("Even");
}

}
