#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    unordered_map<int, unordered_set<int>> booked;
    unordered_map<int, int> seatsLeft;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "BOOK") {
            int X, Y;
            cin >> X >> Y;

            if (seatsLeft.find(Y) == seatsLeft.end())
                seatsLeft[Y] = 100;

            if (booked[Y].count(X) || seatsLeft[Y] == 0) {
                cout << "false\n";
            } else {
                booked[Y].insert(X);
                seatsLeft[Y]--;
                cout << "true\n";
            }
        }

        else if (query == "CANCEL") {
            int X, Y;
            cin >> X >> Y;

            if (booked[Y].count(X) == 0) {
                cout << "false\n";
            } else {
                booked[Y].erase(X);
                seatsLeft[Y]++;
                cout << "true\n";
            }
        }

        else if (query == "IS_BOOKED") {
            int X, Y;
            cin >> X >> Y;

            if (booked[Y].count(X))
                cout << "true\n";
            else
                cout << "false\n";
        }

        else if (query == "AVAILABLE_TICKETS") {
            int Y;
            cin >> Y;

            if (seatsLeft.find(Y) == seatsLeft.end())
                cout << 100 << "\n";
            else
                cout << seatsLeft[Y] << "\n";
        }
    }

    return 0;
}
