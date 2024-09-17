#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1){
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int l;
    scanf("%d", &l);

    for (int i = 2; i <= l; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
