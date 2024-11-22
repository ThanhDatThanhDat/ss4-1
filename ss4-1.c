#include <stdio.h>

int main() {
    int num;

    printf("Vui long nhap vao mot so nguyen: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("So %d là so duong.\n", num);
    } else if (num < 0) {
        printf("So %d là so am.\n", num);
    } else {
        printf("So %d là so 0.\n", num);
    }

    return 0;
}
