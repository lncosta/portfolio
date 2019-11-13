#include <stdio.h>
 char mat[1001][1001];
 
int kill(int n, int x, int y){
 
    if (mat[x][y] == '.'){
        mat[x][y] = 'x';
    }
 
    if (mat[x + 1][y] == '.'){
        mat[x + 1][y] = 'x';
        kill(n, x+1, y);
    }
    if (mat[x - 1][y] == '.'){
        mat[x - 1][y] = 'x';
        kill(n, x-1, y);
    }
    if (mat[x][y + 1] == '.'){
        mat[x][y +1] = 'x';
        kill(n, x, y +1);
    }
    if (mat[x][y - 1] == '.'){
        mat[x][y - 1] = 'x';
        kill(n, x, y -1);
    }
 
    return 0;
}
 
int main(){
    int n, i, j, x, y;
    scanf("%d", &n);
 
    for (i = 0; i < n ; i++){
         for (j = 0; j < n; j++){
            scanf(" %c", &mat[i][j]);
         }
    }
 
    scanf("%d", &x);
    scanf("%d", &y);
    kill(n, x, y);
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
           printf("%c", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
