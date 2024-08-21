#include <stdio.h>

// Matrisin iki köþegeninde bulunan sayýlarýn yerlerini ters çevirin
void reverse_diagonals(int matrix[3][3]) {
    // Sol üst köþeden sað alt köþeye doðru olan köþegeyi ters çevirin
    int temp = matrix[0][0];
    matrix[0][0] = matrix[2][2];
    matrix[2][2] = temp;

    // Sað üst köþeden sol alt köþeye doðru olan köþegeyi ters çevirin
    temp = matrix[0][2];
    matrix[0][2] = matrix[2][0];
    matrix[2][0] = temp;
}

int main(void) {
    // Matrisi tanýmlayýn
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Matrisi ekrana yazdýrýn
    printf("Original matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Matrisin iki köþegeninde bulunan sayýlarýn yerlerini ters çevirin
    reverse_diagonals(matrix);

    // Ters çevrilmiþ matrisi ekrana yazdýrýn
    printf("\nReversed matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
