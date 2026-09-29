#include<stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sum_primary_diagonal = 0;
    int sum_secondary_diagonal = 0;
    
    for(i = 0; i < n; i++) {
        sum_primary_diagonal += matrix[i][i]; // Primary diagonal
        sum_secondary_diagonal += matrix[i][n - 1 - i]; // Secondary diagonal
    }
    
    printf("Sum of primary diagonal: %d\n", sum_primary_diagonal);
    printf("Sum of secondary diagonal: %d\n", sum_secondary_diagonal);
    
    return 0;
}