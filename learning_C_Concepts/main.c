#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int **array;
  int row, col;
  printf("Enter row and column:");
  scanf("%d%d", &row, &col);

  array = (int **)malloc(sizeof(int *) * row);
  for (int i = 0; i < row; i++) {
    array[i] = (int *)malloc(sizeof(int) * col);
  }

  printf("Getting input:");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &array[i][j]);
    }
  }

  printf("Getting output:\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d", array[i][j]);
    }
    printf("\n");
  }

}
