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

int printOut(){
        cout << -1 << " " << -1 << " " << -1 << endl;
        return 0;
}

int main(int argc, char const *argv[])
{
    int n, y;
    cin >> n >> y;
    y = y / 1000;
    rep(i, n + 1) {
        if ((y - n - 9 * i) % 4 == 0) {
            int yy = (y - n - 9 * i) / 4;
            int z = n - i - yy;
            if (yy < 0 || z < 0) {
                continue;
            }
            cout << i << " " << yy << " " << z << endl;
            return 0;
        }
    }
    printOut();
    
    return 0;
}
