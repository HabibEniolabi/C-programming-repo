#include<stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}

int add(int a, int b) {
    return a + b;
}
int main() {
    printf("Hello, World!");
    int result = add(2, 3);
    printf("The sum is: %d\n", result);
    return 0;
}