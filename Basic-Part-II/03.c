#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if ((x > y && x < z) || (x > z && x < y)) {
        printf("%d", x);
    } else if ((y > x && y < z) || (y > z && y < x)) {
        printf("%d", y);
    } else {
        printf("%d", z);
    }
}
