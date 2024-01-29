#include <stdio.h>

int main() {
    int MatrixA[2][2] = {{1, 2}, {3, 4}};
    int MatrixB[2][2] = {{5, 6}, {7, 8}};
    int RowA = sizeof(MatrixA);
    int ColumnsA = sizeof(MatrixA[0]);
    int RowB = sizeof(MatrixB);
    int ColumnB = sizeof(MatrixB[0]);

void addMatrices(int rows, int columns, int a[rows][columns], int b[rows][columns], int result[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}


void multiplyMatrices(int RowA, int ColumnsA, int ColumnB, int a[RowA][ColumnsA], int b[ColumnsA][ColumnB], int result[RowA][ColumnB]) {
    for (int i = 0; i < RowA; i++) {
        for (int j = 0; j < ColumnB; j++) {
            for (int k = 0; k < ColumnsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


void printMatrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

}