#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Nhập một số nguyên dương n (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui lòng nhập số nguyên dương lớn hơn 0.\n");
    } else {
        if (isPrime(n)) {
            printf("%d là số nguyên tố.\n", n);
        } else {
            printf("%d không phải là số nguyên tố.\n", n);
        }
    }

    return 0;
}
