/* This program reads a square matrix of size N, then outputs the same matrix, but with its diagonals inverted.*/

#include <stdio.h>
 
int main(){
    int n, i, j;
    scanf("%d", &n);
    int A[n][n], B[n][n];
 
    for(i = 0; i < n; i++){
        for(j =0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
 
    for(i = 0; i < n; i++){
        for(j =0; j < n; j++){
            if (i == j){
               printf("%d ", A[i][n - i - 1]);
            }
            else if (n - j - 1 == i){
                 printf("%d ", A[i][n - j - 1]);
            }
            else{
               printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    } 
return 0;
}
