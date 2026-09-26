#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool palindrome = true;

    for (int i = 0; i < word.length() / 2; i++) {
        if (word[i] != word[word.length() - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
