#include <stdio.h>

void replace_zeros(int mat[10][10]){
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10 ; j++){
      if(i != j && mat[i][j] == 0) 
        mat[i][j] = 10000000;
    }
  }
}


void floydWarshall(int mat[10][10]) {
  int matrix[10][10], i, j, k;
    for (k = 0; k < 10; k++) {
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                if (mat[i][k] + mat[k][j] <= mat[i][j])
                matrix[i][j] = mat[i][k] + mat[k][j];
      }
    }
  }
}