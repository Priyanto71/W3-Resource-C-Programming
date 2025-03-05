#include <stdio.h>
#include <stdlib.h>
#define check(x) (x>0?x:0)
int n, r=0, x;

int main(void) {
	printf("Input a positive integer:\n");
	scanf("%d", &n);

	for (x = check(n - 2000); x <= 2000 && n >= x; x++) {
		r += (1001 - abs(1000 - (n - x))) * (1001 - abs(1000 - x));
	}
	printf("\nNumber of combinations of p,q,r,s:\n");
	printf("%d\n", r);
}
