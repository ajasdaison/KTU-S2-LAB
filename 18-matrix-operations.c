// Write a menu driven program for performing matrix addition, multiplication
// and finding the transpose. Use functions to (i) read a matrix, (ii) find the
// sum of two matrices, (iii) find the product of two matrices, (i) find the
// transpose of a matrix and (v) display a matrix.
#include <stdio.h>

#define MAX_SIZE 10

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE],
                 int rows, int cols);
void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE],
                      int mat2[MAX_SIZE][MAX_SIZE],
                      int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1,
                      int rows2, int cols2);
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);

int main() {
  int choice, rows1, cols1, rows2, cols2;
  int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE],
      result[MAX_SIZE][MAX_SIZE];

  printf("Enter the number of rows and columns for matrix 1: ");
  scanf("%d %d", &rows1, &cols1);
  printf("Enter the elements of matrix 1:\n");
  readMatrix(matrix1, rows1, cols1);

  printf("Enter the number of rows and columns for matrix 2: ");
  scanf("%d %d", &rows2, &cols2);
  printf("Enter the elements of matrix 2:\n");
  readMatrix(matrix2, rows2, cols2);

  do {
    printf("\nMenu:\n");
    printf("1. Add Matrices\n");
    printf("2. Multiply Matrices\n");
    printf("3. Transpose Matrix\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added: dimensions do not match.\n");
      } else {
        addMatrices(matrix1, matrix2, rows1, cols1);
      }
      break;
    case 2:
      if (cols1 != rows2) {
        printf("Matrices cannot be multiplied: columns of matrix 1 must equal "
               "rows of matrix 2.\n");
      } else {
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
      }
      break;
    case 3:
      printf("Transpose of Matrix 1:\n");
      transposeMatrix(matrix1, rows1, cols1);
      printf("\nTranspose of Matrix 2:\n");
      transposeMatrix(matrix2, rows2, cols2);
      break;
    case 4:
      printf("Exiting program.\n");
      break;
    default:
      printf("Invalid choice. Please enter a valid option.\n");
    }
  } while (choice != 4);

  return 0;
}

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE],
                 int rows, int cols) {
  int sum[MAX_SIZE][MAX_SIZE];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  printf("Sum of Matrices:\n");
  displayMatrix(sum, rows, cols);
}

void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE],
                      int mat2[MAX_SIZE][MAX_SIZE],
                      int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1,
                      int rows2, int cols2) {
  for (int i = 0; i < rows1; i++) {
    for (int j = 0; j < cols2; j++) {
      result[i][j] = 0;
      for (int k = 0; k < cols1; k++) {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
  printf("Product of Matrices:\n");
  displayMatrix(result, rows1, cols2);
}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
  int transposed[MAX_SIZE][MAX_SIZE];
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      transposed[i][j] = matrix[j][i];
    }
  }
  displayMatrix(transposed, cols, rows);
}
