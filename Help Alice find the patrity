#include <stdio.h>

long long f(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    long long L, R;
    scanf("%lld %lld", &L, &R);

    long long ans = f(R) ^ f(L - 1);

    if (ans % 2 == 0)
        printf("even");
    else
        printf("odd");

    return 0;
}
