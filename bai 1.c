#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a,b; 
    scanf("%d %d", &a,&b);
    swap(&a,&b);
    printf("%d %d", a,b);

    return 0;
}
