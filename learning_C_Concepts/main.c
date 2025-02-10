#include <stdio.h>
#include <stdlib.h>
int main(void) {
/*

    int **array;
  int row, col;
  printf("Enter rows and columes:");
  scanf("%d%d", &row, &col);

  array = (int **)malloc(sizeof(int *) * row);

  for (int i = 0; i < row; i++) {
    array[i] = (int *)malloc(sizeof(int) * col);
  }

  printf("Getting input:\n");
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
*/

char b = 'b';
    printf("%c\n",b-32);
    int num = b-32;
    printf("%d\n",num);
    printf("%B",num);
}
