#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 7 == 0) {
        printf("Divisible by 3 and 7.\n");
    } else {
        printf("Not divisible by 3 and 7.\n");
    }
    return 0;
}
            