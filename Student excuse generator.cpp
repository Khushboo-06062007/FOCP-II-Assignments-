code with error:
*******************************************************
 Project Title : AI Student Excuse Generator
 Description   : Generates random creative excuses
********************************************************/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    vector<string> excuses = {
        "{name} forgot to submit homework.",
        "{name} had internet issues.",
        "{name} laptop crashed suddenly.",
        "{name} was sleeping while submitting.",
        "{name} file got deleted.",
        "{name} got distracted by games.",
        "{name} was sick.",
        "{name} power went off.",
        "{name} cloud sync failed.",
        "{name} forgot deadline."
    };

    cout << "\nYour Excuses:\n";

    for (int i = 0; i < 3; i++) {
        int index = rand() % excuses.size();

        string excuse = excuses[0];   // ❌ BUG 1: always picks first excuse

        size_t pos = 0;
        while ((pos = excuse.find("{name}", pos)) != string::npos) {
            excuse.replace(pos, 6, name);
            // ❌ BUG 2: missing pos update → can behave incorrectly
        }

        cout << excuse << endl;
    }

    return 0;
}
