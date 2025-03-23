#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10]; int *b=a;
    for(int i=0; i<10; i++){
        scanf("%d", &b[i]);
    }
    for(int i=0; i<10; i++){
        printf("%d ", b[i]);
    }
    return 0;
}
