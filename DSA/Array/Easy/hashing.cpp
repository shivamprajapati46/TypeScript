#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hash[26] = {0};

    // input array + frequency count
    for (int i = 0; i < s.length(); i++) {
        hash[s[i]-'a']++;
    }

    int q;
    cin >> q;
    

    // answer queries
    while (q--) {
        char c;
        cin >> c;
        cout << c << " -> " << hash[c- 'a'] << endl;
    }

    return 0;
}
