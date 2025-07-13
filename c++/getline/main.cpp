#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    string firstPlace = "", secondPlace = "";
    string words = "";
    int spaceCount = 0;

    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            if (!words.empty()) {
                spaceCount++;

                if (spaceCount <= 2) {
                    if (!firstPlace.empty()) firstPlace += " ";
                    firstPlace += words;
                }

                else {
                    if (!secondPlace.empty()) secondPlace += " ";
                    secondPlace += words;
                }

                words = "";
            }
        } else {
            words += sentence[i];
        }
    }

    if (firstPlace == secondPlace) {
        cout << "together" << endl;
    } else {
        cout << "lost" << endl;
    }

    return 0;
}
