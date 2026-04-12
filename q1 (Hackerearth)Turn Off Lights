#include <iostream>
#include <string>
using namespace std;

bool canSolve(string s, int n, int k, int l) {
    int ops = 0;

    for (int i = 0; i < n; ) {
        if (s[i] == '1') {
            ops++;
            i += l;  // turn off next l bulbs
        } else {
            i++;
        }
    }

    return ops <= k;
}

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int low = 1, high = n;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canSolve(s, n, k, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
