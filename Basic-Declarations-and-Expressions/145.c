#include <stdio.h>
#include <stdlib.h>
char t[128];
int main(void) {
  int i, j, k;
  int r = 0;
  char x[8];
  printf("Input Sentences with positive integers:\n");

  scanf("%s", t);

  i = 0;
  while (t[i]) {
    for (; (t[i] < '0' || '9' < t[i]) && t[i]; i++);

    if ('0' <= t[i] && t[i] <= '9') {
      for (j = 0; '0' <= t[i] && t[i] <= '9'; j++, i++) {
        x[j] = t[i];
      }

      x[j] = '\0';
      r += atoi(x);
    }
  }
  printf("Sum of all numerical values embedded in a sentence:\n");
  printf("%d\n", r);
}
