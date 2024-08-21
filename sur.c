#include <stdio.h>

// Matrisin iki k��egeninde bulunan say�lar�n yerlerini ters �evirin
void reverse_diagonals(int matrix[3][3]) {
    // Sol �st k��eden sa� alt k��eye do�ru olan k��egeyi ters �evirin
    int temp = matrix[0][0];
    matrix[0][0] = matrix[2][2];
    matrix[2][2] = temp;

    // Sa� �st k��eden sol alt k��eye do�ru olan k��egeyi ters �evirin
    temp = matrix[0][2];
    matrix[0][2] = matrix[2][0];
    matrix[2][0] = temp;
}

int main(void) {
    // Matrisi tan�mlay�n
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Matrisi ekrana yazd�r�n
    printf("Original matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Matrisin iki k��egeninde bulunan say�lar�n yerlerini ters �evirin
    reverse_diagonals(matrix);

    // Ters �evrilmi� matrisi ekrana yazd�r�n
    printf("\nReversed matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
