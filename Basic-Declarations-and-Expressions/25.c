#include<stdio.h>
int main(){
int m;
char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
printf("Input a number between 1 to 12 to get the month name: ");
scanf("%d",&m);
if(m>=1 && m<=12){
printf("%s",month[m-1]);
}else{
printf("No Month Found");
}
}
