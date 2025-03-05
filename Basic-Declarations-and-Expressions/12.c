#include<stdio.h>
int main(){
    char id[10];
    float h,amount,salary;
printf("Input the Employees ID(Max. 10 chars): ");
scanf("%s",&id);
printf("Input the working hrs: ");
scanf("%f",&h);
printf("Salary amount/hr: ");
scanf("%f",&amount);
salary=amount*h;
printf("Employees ID = %s\n",id);
printf("Salary = U$ %.2f",salary);
}
