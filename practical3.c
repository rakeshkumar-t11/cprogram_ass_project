#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 10 && num < 50) {
        printf("The number is greater than 10 and less than 50.\n");
    } else {
        printf("The number is NOT greater than 10 and less than 50.\n");
    }

    return 0;
}
