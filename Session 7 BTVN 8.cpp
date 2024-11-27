#include <stdio.h>

int main() {
    int row, col;

    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);
    
    int array[row][col];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Phan tu o hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Mang da nhap:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", array[i][j]);
		}
		printf("\n");
    }

    return 0;
}

