#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

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

int main(int argc, char const *argv[])
{
    int n;
    vector<int> h;
    cin >> n;
    rep(i, n) {
        int x;
        cin >> x;
        h.push_back(x);
    }
    int count = 0;
    rep(i, h.size()) {
        int a = h[i];
        count += a;
        rep(j, h.size()) {
            if (a == 0) {
                break;
            } else if (a <= h[i + j]) {
                h[i + j] -= a;
            } else {
                a = h[i + j];
                h[i + j] = 0;
            }
        }
    }
    cout << count << endl;
    return 0;
}
