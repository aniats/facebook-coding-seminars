#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void reverse_words(string& s) {
    int j = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == ' ') {
            reverse(s.begin() + j, s.begin() + i);
            j = i + 1;
        }
    }

    reverse(s.begin() + j, s.end());
    reverse(s.begin(), s.end());
}

int main() {
    string users_str;
    cin >> users_str;
    reverse_words(users_str);
    cout << users_str;
    return 0;
}