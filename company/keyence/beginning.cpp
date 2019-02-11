#include <iostream>

using namespace std;

int main()
{
    bool key[10] = {false};
    int n[4];
    for (int i = 0; i < 4; ++i) {
        cin >> n[i];
        key[n[i]] = true;
    }
    
    if (key[1] && key[9] && key[7] && key[4]) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}