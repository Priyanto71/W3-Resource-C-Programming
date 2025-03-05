#include<stdio.h>
int main(){
int x;

while(1){
printf("Input the password: ");
scanf("%d",&x);
if(x==1234){
    printf("Correct password");
break;
}else{
printf("Incorrect password\n");

}
}
}
