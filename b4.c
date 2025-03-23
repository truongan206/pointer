#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Vui lòng nhập kích thước mảng: ");
    scanf("%d", &n);

    // Cấp phát bộ nhớ động cho mảng a
    int *a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {  // Kiểm tra nếu cấp phát bộ nhớ thất bại
        printf("Không thể cấp phát bộ nhớ!\n");
        return 1;
    }

    // Nhập các giá trị cho mảng a
    printf("Vui lòng nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sắp xếp mảng theo thứ tự tăng dần (sắp xếp nổi bọt)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Hoán đổi a[j] và a[j + 1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // In mảng đã sắp xếp
    printf("Mảng a sau khi sắp xếp tăng dần: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ
    free(a);

    return 0;
}
