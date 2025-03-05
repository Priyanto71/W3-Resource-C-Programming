#include<stdio.h>
int main(){
    float s,l,avg;
    printf("Input total distance in km: ");
    scanf("%f",&s);
    printf("Input total fuel spent in liters: ");
    scanf("%f",&l);
    avg=s/l;
    printf("Average consumption (km/lt) %.3f",avg);
}
