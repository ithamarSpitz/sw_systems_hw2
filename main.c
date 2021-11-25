#include <stdio.h>
#include "my_mat.h"

void fill_mat(int mat[10][10]){
    for(int i = 0; i < 100; i++){
        printf("number that added %d ", i);
        scanf("%d", &mat[i/10][i%10]);}
}

void route(int to_print, int mat[10][10]){
    printf("should print");
    int source;
    int dest;
    scanf("%d", &source);
    scanf("%d", &dest);
    floydWarshall(mat);
    if(to_print)
        printRoute(source, dest, mat);
    else
        ifRoute(source, dest, mat);
}

int main(){
    int mat[10][10];
    char temp;
    while(temp != 'D'){
        printf("enter a letter: ");
        scanf("%c", &temp);
        if(temp == 'A'){
            fill_mat(mat);
        }
        if(temp == 'B'){
            route(0, mat);
        }
        if(temp == 'C'){
            route(1, mat);
        }
    }
}