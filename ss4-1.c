#include <stdio.h>

int main() {
    int num;

    printf("Vui long nhap vao mot so nguyen: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("So %d l� so duong.\n", num);
    } else if (num < 0) {
        printf("So %d l� so am.\n", num);
    } else {
        printf("So %d l� so 0.\n", num);
    }

    return 0;
}
