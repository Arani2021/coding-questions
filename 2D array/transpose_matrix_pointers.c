//Transpose Matrix using pointers 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter the no of rows: ");
    scanf("%d", &r);
    printf("Enter the no of columns: ");
    scanf("%d", &c);

    // Allocate memory for 2D dynamic array (arr)
    int **arr = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        arr[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter all elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Allocate memory for the transpose matrix (brr)
    int **brr = (int **)malloc(c * sizeof(int *));
    for (int i = 0; i < c; i++) {
        brr[i] = (int *)malloc(r * sizeof(int));
    }

    // Transpose the matrix and store it in brr
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            brr[i][j] = arr[j][i];
        }
    }

    // Printing the transpose matrix (brr)
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
