#include <stdio.h>
int main() {
    int a,b;
    for(a=1,b=100;b>=0;b=b-10){

        printf(" a=%d\t\tb=%d\n",a,b);
        a=a+5;
    }
}
