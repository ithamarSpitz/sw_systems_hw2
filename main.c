#include <stdio.h>

void replace2zeros(int mat[10][10]){
  for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10 ; j++){
        mat[i][j] = 0;
    }
  }
}

void main{
    int a = 0;
    int b = 0;
    int c = 0;
    int mat[10][10];
    int k = 0;
    int j = 0;
    char str[10000];
    scanf(%s, str);
    int index = 0;
    int source = -1;
for (size_t i = 0; i < count; i++)
{
    char temp = str[i]
    if(temp == 'D')
        break;
    if(temp == 'A'){
        a = 1;
        b = 0;
        c = 0;
        replace2zeros(*mat)
        continue;
    }
    if(temp == 'B'){
        a = 1;
        b = 0;
        c = 0;
        continue;
    }
    if(temp == 'C'){
        a = 1;
        b = 0;
        c = 0;
        continue;
    }
    if(a){ 
        if(temp == ' '){
            if (j == 0 && k==0)
                continue;
            if (j == 9){
                if(k == 9){
                    k = 0;
                    j = 0;
                }else{
                    j = 0;
                    k = k + 1;
                }
            }else{
               j = j + 1; 
            }
        }else{
            mat[i][j] = mat[i][j] * 10 + (temp - '0');
    }
    if(b){
        if(temp == ' ')
            continue;
        if(source == -1){
            source = (temp - '0');
        }else{
            ifRoute(source, (temp - '0'), *mat);
            source = -1;
        }
        }
    }
    if(c){
        if(temp == ' ')
            continue;
        if(source == -1){
            source = (temp - '0');
        }else{
            ifRoute(source, (temp - '0'), *mat);
            source = -1;
        }
    }
}

    
}