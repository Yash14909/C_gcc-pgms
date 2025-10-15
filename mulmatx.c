#include <stdio.h>

void multiplyMatrices(int row1, int col1, int A[row1][col1], int row2, int col2, int B[row2][col2], int result[row1][col2]) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row1, col1, row2, col2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }

    int A[row1][col1], B[row2][col2], result[row1][col2];

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(row1, col1, A, row2, col2, B, result);

    printf("Resultant Matrix:\n");
    printMatrix(row1, col2, result);

    return 0;
}