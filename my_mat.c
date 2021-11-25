#include <stdio.h>
#define INF 100000000
/*
max int devided by 10 stands for infinity for taking the bigest number that still works with our algorithm
*/

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
  replace_zeros(mat);

  for (k = 0; k < 10; k++) {
      for (i = 0; i < 10; i++) {
          for (j = 0; j < 10; j++) {
              if (mat[i][k] + mat[k][j] < mat[i][j]){
                mat[i][j] = mat[i][k] + mat[k][j];
              }
              }
          }
      }
}

void ifRoute(int i, int j, int mat[10][10]){
  if(mat[i][j]!=0 && mat[i][j]!=INF) printf("True\n");
  else printf("Flase\n");
}

void printRoute(int i, int j, int mat[10][10]){
  if(mat[i][j]!=0 && mat[i][j]!=INF) printf("%d\n", mat[i][j]);
  else printf("%d\n", -1);
}
