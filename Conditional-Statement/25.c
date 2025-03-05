#include<stdio.h>
int main(){
    int x;
float area,r,l,w,b,h;
printf("Input 1 for area of circle\n");
printf("Input 2 for area of rectangle\n");
printf("Input 3 for area of triangle\n");
scanf("%d",&x);
switch(x){
case 1:
    printf("Input radius of the circle : ");
    scanf("%f",&r);
    area=3.14*r*r;
    break;
case 2:
    printf("Input length and width of the rectangle : ");
    scanf("%f%f",&l,&w);
    area=l*w;
    break;
case 3:
    printf("Input base and height of the triangle : ");
    scanf("%f%f",&b,&h);
    area=(b*h)/2;
    break;
}
printf("The area is : %.6f",area);

}
