#include <iostream>
using namespace std;

int countPrimeFactors(int n) {
    int count = 0;

    // check for 2
    if (n % 2 == 0) {
        count++;
        while (n % 2 == 0)
            n /= 2;
    }

    // check odd numbers
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0)
                n /= i;
        }
    }

    // if n is prime
    if (n > 1)
        count++;

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int k = countPrimeFactors(n);

        int ans = 1;
        for (int i = 0; i < k; i++) {
            ans *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}
