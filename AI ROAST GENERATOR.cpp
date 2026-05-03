WITH ERROR IN CODE
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// BUGGY FUNCTION
string personalize(string roast, string name) {
    size_t pos = roast.find("{name}");
    if (pos != string::npos) {
        roast.replace(pos, 6, name);
    }
    return roast;
}

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched careers.",
        "If laziness had a face, it would be {Name}.",
        "{NAME} doesn't debug code, just stares at it.",
        "{name}'s logic is like WiFi — weak and unstable."
    };

    srand(time(0));
    int index = rand() % roasts.size();

    string result = personalize(roasts[index], name);

    cout << result << endl;

    return 0;
}

DEBUGGED 
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

string personalize(string roast, string name) {
    size_t pos = 0;

    while ((pos = roast.find("{name}", pos)) != string::npos) {
        roast.replace(pos, 6, name);
    }

    pos = 0;
    while ((pos = roast.find("{Name}", pos)) != string::npos) {
        roast.replace(pos, 6, name);
    }

    pos = 0;
    while ((pos = roast.find("{NAME}", pos)) != string::npos) {
        roast.replace(pos, 6, name);
    }

    return roast;
}

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched careers.",
        "If laziness had a face, it would be {Name}.",
        "{NAME} doesn't debug code, just stares at it.",
        "{name}'s logic is like WiFi — weak and unstable."
    };

    srand(time(0));
    int index = rand() % roasts.size();

    cout << personalize(roasts[index], name) << endl;

    return 0;
}
