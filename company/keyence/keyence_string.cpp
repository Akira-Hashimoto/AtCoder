#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s, t = "keyence";
    cin >> s;
    int sLength = s.size();
    if (sLength < 7) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0;i < 8; i++) {
        if(s.substr(0,i) + s.substr(sLength - (7 - i)) == t) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
