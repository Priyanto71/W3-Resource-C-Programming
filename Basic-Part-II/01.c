#include <stdio.h>1
int main() {
    int n, i, j, min, num = 0, max_count = 1;

    scanf("%d",&n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++) {
        int count = 1;

        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            num = a[i];
        }
    }
    if (max_count > 1) {
        printf("%d\n", num);
    } else {
        printf("%d\n", min);
    }
}
