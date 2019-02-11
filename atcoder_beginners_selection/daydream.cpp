#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

typedef long long ll;
#define rep(i, n) for(long long int (i) = 0; (i) < (int) (n); (i)++)
#define rrep(i,a,b) for(long long int i=(a);i<(b);i++)
#define rrrep(i,a,b) for(long long int i=(a);i>=(b);i--)
#define define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()

const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18;

string cut(string s, string ss) {
    return s.substr(0, s.size() - ss.size());
}

int main(int argc, char const *argv[])
{
    string dream, dreamer, erase, eraser;
    dream = "dream";
    dreamer = "dreamer";
    erase = "erase";
    eraser = "eraser";
    string s;
    cin >> s;
    while(1){
        if (s.size() >= 7 && s.substr(s.size() - 7) == dreamer) {
            s = cut(s, dreamer);
        }  else if (s.size() >= 5 && s.substr(s.size() - 5) == dream)
        {
            s = cut(s, dream);
        } else if (s.size() >= 5 && s.substr(s.size() - 5) == erase)
        {
            s = cut(s, erase);
        } else if (s.size() >= 6 && s.substr(s.size() - 6) == eraser)
        {
            s = cut(s, eraser);
        } else
        {
            cout << "NO" << endl;
            return 0;
        }
        if (s.size() == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
}
