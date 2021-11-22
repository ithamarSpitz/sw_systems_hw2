#include <stdio.h>
#include <stdbool.h>

void replace_zeros(int mat[10][10]){
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10 ; j++){
      if(i != j && mat[i][j] == 0) 
        mat[i][j] = 10000000;
    }
  }
}

void floydWarshall(int mat[10][10]){
  int matrix[10][10], i, j, k;
  for (int i = 0; i < 10; i++){
      for (int j = 0; j < 10; j++){
          matrix[i][j] = mat[i][j];
      }
  }
  replace_zeros(*matrix);

  for (k = 0; k < 10; k++) {
      for (i = 0; i < 10; i++) {
          for (j = 0; j < 10; j++) {
              if (mat[i][k] + mat[k][j] <= mat[i][j])
                matrix[i][j] = mat[i][k] + mat[k][j];
              }
          }
      }
}

bool ifRoute(int i, int j, int mat[10][10]){
  if(mat[i][j]!=0 && mat[i][j]!=10000000) return true;
  else return  false;
}

void printRoute(int i, int j, int mat[10][10]){
  if(mat[i][j]!=0 && mat[i][j]!=10000000) printf("%d", mat[i][j]);
  else printf("%d", -1);
}
