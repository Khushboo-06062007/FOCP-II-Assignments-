#include <bits/stdc++.h>
using namespace std;

class Bank {
    unordered_map<int, long long> mp;

public:
    bool CREATE(int X, long long Y) {
        if(mp.find(X) == mp.end()) {
            mp[X] = Y;
            return true;
        }
        else {
            mp[X] += Y;
            return false;
        }
    }

    bool DEBIT(int X, long long Y) {
        if(mp.find(X) == mp.end() || mp[X] < Y) {
            return false;
        }
        mp[X] -= Y;
        return true;
    }

    bool CREDIT(int X, long long Y) {
        if(mp.find(X) == mp.end()) {
            return false;
        }
        mp[X] += Y;
        return true;
    }

    long long BALANCE(int X) {
        if(mp.find(X) == mp.end()) {
            return -1;
        }
        return mp[X];
    }
};

int main() {
    int Q;
    cin >> Q;

    Bank obj;

    while(Q--) {
        string query;
        cin >> query;

        if(query == "CREATE") {
            int X;
            long long Y;
            cin >> X >> Y;

            cout << (obj.CREATE(X, Y) ? "true" : "false") << "\n";
        }

        else if(query == "DEBIT") {
            int X;
            long long Y;
            cin >> X >> Y;

            cout << (obj.DEBIT(X, Y) ? "true" : "false") << "\n";
        }

        else if(query == "CREDIT") {
            int X;
            long long Y;
            cin >> X >> Y;

            cout << (obj.CREDIT(X, Y) ? "true" : "false") << "\n";
        }

        else if(query == "BALANCE") {
            int X;
            cin >> X;

            cout << obj.BALANCE(X) << "\n";
        }
    }

    return 0;
}
