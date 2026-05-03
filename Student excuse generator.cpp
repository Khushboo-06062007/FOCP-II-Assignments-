code with error:
/*******************************************************
 Project Title : AI Student Excuse Generator (BUGGY)
 Description   : Generates random excuses (with errors)
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

        string excuse = excuses[0];   // ❌ BUG 1: always using index 0

        size_t pos = 0;
        while ((pos = excuse.find("{name}", pos)) != string::npos) {
            excuse.replace(pos, 6, name);
            // ❌ BUG 2: missing pos update → infinite loop risk
        }

        cout << excuse << endl;
    }

    return 0;
}


DEBUGGED:


/*******************************************************
 Project Title : AI Student Excuse Generator
 Description   : Generates random creative excuses
                 using user's name and templates.
 Author        : (Your Name)
********************************************************/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string name;

    cout << "============================================\n";
    cout << "        AI STUDENT EXCUSE GENERATOR         \n";
    cout << "============================================\n\n";

    cout << "Enter your name: ";
    getline(cin, name);

    // Input validation
    if (name.empty()) {
        cout << "\nPlease enter a valid name!\n";
        return 0;
    }

    vector<string> excuses = {
        "{name} couldn't complete the assignment because the laptop crashed.",
        "{name} tried finishing homework but the internet stopped working.",
        "{name} was about to submit when the file disappeared.",
        "{name} worked all night but forgot to save the file.",
        "{name} started early but got distracted."
    };

    cout << "\n💡 Your Excuses:\n";
    cout << "----------------------------------\n";

    // Random excuses
    for (int i = 0; i < 3; i++) {
        int index = rand() % excuses.size();
        string excuse = excuses[index];

        // Replace {name}
        size_t pos = 0;
        while ((pos = excuse.find("{name}", pos)) != string::npos) {
            excuse.replace(pos, 6, name);
            pos += name.length();
        }

        cout << excuse << endl;
    }

    cout << "----------------------------------\n";

    cout << "\n😄 Good luck explaining that!\n";

    return 0;
}
