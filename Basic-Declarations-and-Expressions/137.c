#include <stdio.h>
double check(double x1,double x2,double y1,double y2){
return x1*y2-x2*y2;
}
int main() {
    double x[3],y[3],xp,yp,cp1,cp2,cp3;
    printf("Input three points to form a triangle:\n");
    scanf("%ld%ld%ld%ld%ld%ld",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);
    printf("Input the point to check it is inside the triangle or not:\n");
    scanf("%ld%ld",&xp,&yp);
    cp1 = check(x[1] - x[0], y[1] - y[0], xp - x[0], yp - y[0]);
  cp2 = check(x[2] - x[1], y[2] - y[1], xp - x[1], yp - y[1]);
  cp3 = check(x[0] - x[2], y[0] - y[2], xp - x[2], yp - y[2]);
  if(((cp1>0)&&(cp2>0)&&(cp3>0))||((cp1<0)&&(cp2<0)&&(cp3<0))){
      printf("The point is inside the triangle!");

  }else{
      printf("The point is outside the triangle!");
  }
}

