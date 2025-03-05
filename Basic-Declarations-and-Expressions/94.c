#include<stdio.h>
#include<math.h>
int main(){
float w,h,bmi;
printf("Input the weight: ");
scanf("%f",&w);
printf("Input the height: ");
scanf("%f",&h);
bmi=w/(h*h);
printf("BMI = %f\n",bmi);
if(bmi< 18.5){
    printf("Grade: Under");
}else if(bmi>=18.5 && bmi< 25.0){
   printf("Grade: Normal");
}else if(bmi>=25.0 && bmi< 30.0){
   printf("Grade: Over");
}else{
   printf("Grade: Obesity");
}



}
