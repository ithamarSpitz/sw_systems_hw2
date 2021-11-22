#include <stdio.h>
#include <stdbool.h>

#define INF 10000000

void replace_zeros(int mat[10][10]){
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10 ; j++){
      if(i != j && mat[i][j] == 0) 
        mat[i][j] = INF;
    }
  }
}

void floydWarshall(int mat[10][10]){
  int i, j, k;
  replace_zeros(*mat);

  for (k = 0; k < 10; k++) {
      for (i = 0; i < 10; i++) {
          for (j = 0; j < 10; j++) {
              if (mat[i][k] + mat[k][j] <= mat[i][j])
                mat[i][j] = mat[i][k] + mat[k][j];
              }
          }
      }
}

void ifRoute(int i, int j, int mat[10][10]){
  if(mat[i][j]!=0 && mat[i][j]!=INF) pritf("True");
  else printf("Flase");
}

void printRoute(int i, int j, int mat[10][10]){
  if(mat[i][j]!=0 && mat[i][j]!=INF) printf("%d", mat[i][j]);
  else printf("%d", -1);
}
