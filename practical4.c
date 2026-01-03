#include <stdio.h>

int main() {
    int x = 5;
    int pre, post;

    // Pre-increment
    pre = ++x;   // x is incremented first, then used
    printf("After pre-increment (++x):\n");
    printf("Value of x = %d\n", x);
    printf("Result stored in pre = %d\n\n", pre);

    // Reset x
    x = 5;

    // Post-increment
    post = x++;  // x is used first, then incremented
    printf("After post-increment (x++):\n");
    printf("Value of x = %d\n", x);
    printf("Result stored in post = %d\n", post);

    return 0;
}
