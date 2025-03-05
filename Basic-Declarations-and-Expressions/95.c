#include<stdio.h>
#include<math.h>
int main(){
float c,f;
printf("Celsius to Fahrenheit\n");
printf("---------------------\n");
printf("Celsius   Fahrenheit\n");
for(c=0;c<=150;c=c+10){
    f=(9*(c/5))+32;
    printf("%2.1f\t%9.1f\n",c,f);
}
printf("\n\n");
printf("Fahrenheit to Celsius\n");
printf("---------------------\n");
printf("Fahrenheit  Celsius\n");
for(f=0;f<=150;f=f+10){
    c=5*((f-32)/9);
    printf("%2.1f\t%9.1f\n",f,c);
}




}
