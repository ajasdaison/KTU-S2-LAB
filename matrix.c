#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  size_t rows;
  size_t cols;
} Matrix;

Matrix *matrix_create(size_t rows, size_t cols) {
  Matrix *mat = (Matrix *)malloc(sizeof(Matrix));
  if (mat == NULL) {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(EXIT_FAILURE);
  }
  mat->data = (int *)malloc(rows * cols * sizeof(int));
  if (mat->data == NULL) {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(EXIT_FAILURE);
  }
  mat->rows = rows;
  mat->cols = cols;
  return mat;
}

void matrix_destroy(Matrix *matrix) {
  free(matrix->data);
  free(matrix);
}

void matrix_display(FILE *fp, const Matrix *matrix) {
  for (size_t i = 0; i < matrix->rows; i++) {
    for (size_t j = 0; j < matrix->cols; j++) {
      fprintf(fp, "%d ", matrix->data[i * matrix->cols + j]);
    }
    fprintf(fp, "\n");
  }
}

int matrix_write(const char *filename, const Matrix *matrix) {
  FILE *file = fopen(filename, "wb");
  if (file == NULL) {
    fprintf(stderr, "Error opening file for writing.\n");
    return -1;
  }
  fwrite(&matrix->rows, sizeof(size_t), 1, file);
  fwrite(&matrix->cols, sizeof(size_t), 1, file);
  fwrite(matrix->data, sizeof(int), matrix->rows * matrix->cols, file);
  fclose(file);
  return 0;
}

Matrix *matrix_read(const char *filename) {
  FILE *file = fopen(filename, "rb");
  if (file == NULL) {
    fprintf(stderr, "Error opening file for reading.\n");
    return NULL;
  }
  Matrix *mat = (Matrix *)malloc(sizeof(Matrix));
  if (mat == NULL) {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(EXIT_FAILURE);
  }
  fread(&mat->rows, sizeof(size_t), 1, file);
  fread(&mat->cols, sizeof(size_t), 1, file);
  mat->data = (int *)malloc(mat->rows * mat->cols * sizeof(int));
  if (mat->data == NULL) {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(EXIT_FAILURE);
  }
  fread(mat->data, sizeof(int), mat->rows * mat->cols, file);
  fclose(file);
  return mat;
}

void matrix_add(const Matrix *A, const Matrix *B, Matrix *C) {
  for (size_t i = 0; i < A->rows; i++) {
    for (size_t j = 0; j < A->cols; j++) {
      C->data[i * A->cols + j] =
          A->data[i * A->cols + j] + B->data[i * A->cols + j];
    }
  }
}

void matrix_sub(const Matrix *A, const Matrix *B, Matrix *C) {
  for (size_t i = 0; i < A->rows; i++) {
    for (size_t j = 0; j < A->cols; j++) {
      C->data[i * A->cols + j] =
          A->data[i * A->cols + j] - B->data[i * A->cols + j];
    }
  }
}

void matrix_emul(const Matrix *A, const Matrix *B, Matrix *C) {
  for (size_t i = 0; i < A->rows; i++) {
    for (size_t j = 0; j < A->cols; j++) {
      C->data[i * A->cols + j] =
          A->data[i * A->cols + j] * B->data[i * A->cols + j];
    }
  }
}

void matrix_mul(const Matrix *A, const Matrix *B, Matrix *C) {
  if (A->cols != B->rows) {
    fprintf(stderr,
            "Matrix dimensions are not compatible for multiplication.\n");
    exit(EXIT_FAILURE);
  }
  for (size_t i = 0; i < A->rows; i++) {
    for (size_t j = 0; j < B->cols; j++) {
      int sum = 0;
      for (size_t k = 0; k < A->cols; k++) {
        sum += A->data[i * A->cols + k] * B->data[k * B->cols + j];
      }
      C->data[i * C->cols + j] = sum;
    }
  }
}

// Function to take input for a matrix from the user
void matrix_input(Matrix *matrix) {
  printf("Enter the elements of the matrix:\n");
  for (size_t i = 0; i < matrix->rows; i++) {
    for (size_t j = 0; j < matrix->cols; j++) {
      printf("Element [%zu][%zu]: ", i, j);
      scanf("%d", &(matrix->data[i * matrix->cols + j]));
    }
  }
}

int main() {
  size_t rows, cols;
  printf("Enter the number of rows and columns for matrix A: ");
  scanf("%zu %zu", &rows, &cols);
  Matrix *A = matrix_create(rows, cols);
  matrix_input(A);

  printf("Enter the number of rows and columns for matrix B: ");
  scanf("%zu %zu", &rows, &cols);
  Matrix *B = matrix_create(rows, cols);
  matrix_input(B);
  // Displaying matrix A
  printf("Matrix A:\n");
  matrix_display(stdout, A);

  // Displaying matrix B
  printf("\nMatrix B:\n");
  matrix_display(stdout, B);

  // Add
  Matrix *C_add = matrix_create(A->rows, A->cols);
  matrix_add(A, B, C_add);
  printf("\nResult of A + B:\n");
  matrix_display(stdout, C_add);

  // Sub
  Matrix *C_sub = matrix_create(A->rows, A->cols);
  matrix_sub(A, B, C_sub);
  printf("\nResult of A - B:\n");
  matrix_display(stdout, C_sub);

  // emul
  Matrix *C_emul = matrix_create(A->rows, A->cols);
  matrix_emul(A, B, C_emul);
  printf("\nResult of element multi:\n");
  matrix_display(stdout, C_emul);

  // mul
  Matrix *C_mul = matrix_create(A->rows, A->cols);
  matrix_mul(A, B, C_mul);
  printf("\nResult of matrix multi:\n");
  matrix_display(stdout, C_mul);

  // Freeing memory
  matrix_destroy(A);
  matrix_destroy(B);
  matrix_destroy(C_add);
  matrix_destroy(C_sub);
  matrix_destroy(C_emul);
  matrix_destroy(C_mul);

  return 0;
}
