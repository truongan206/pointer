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
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Tìm giá trị lớn nhất
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; // Cập nhật giá trị lớn nhất
        }
    }

    // Tìm giá trị nhỏ nhất
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i]; // Cập nhật giá trị nhỏ nhất
        }
    }

    // In kết quả
    printf("Giá trị nhỏ nhất mảng là: %d\n", min);
    printf("Giá trị lớn nhất mảng là: %d\n", max);

    // Giải phóng bộ nhớ
    free(a);

    return 0;
}
