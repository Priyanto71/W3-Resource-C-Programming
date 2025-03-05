#include <stdio.h>
int main() {
  int cell[11][11],i, j, n, sum;
  printf("Input number of rows/columns:\n");
  scanf("%d", &n);
  printf("Input the cell value\n");
  if (n > 0) {
    for(i = 0; i < n; i++) {
      printf("\nRow %d input cell values\n", i);
      for(j = 0; j < n; j++) {
        scanf("%d", &cell[i][j]);
      }
    }
    printf("\nResult:\n");
    for(i = 0; i < n; i++) {
      sum= 0;
      for(j = 0; j < n; j++) {
        sum+= cell[j][i];
      }
      cell[n][i] = sum;
    }
    for(i = 0; i < n; i++) {
      sum= 0;
      for(j = 0; j < n; j++) {
        sum+= cell[i][j];
      }
      cell[i][n] = sum;
    }
    sum = 0;
    for(i = 0; i < n; i++) {
      sum += cell[n][i];
    }
    cell[n][n] = sum;
    for(i = 0; i < n + 1; i++) {
      for(j = 0; j < n + 1; j++) {
        printf("%5d", cell[i][j]);
      }
      printf("\n");
    }
  }
}

