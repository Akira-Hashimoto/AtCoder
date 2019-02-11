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

int main(int argc, char const *argv[])
{
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    if (x % 100 == 50) {
        if (c == 0) {
            cout << 0 << endl;
            return 0;
        } else {
            x -= 50;
            c--;
        }
    }
    
    rep(i, a + 1) {
        int aa = i * 500;
        if (aa >= x) {
            if (aa == x){
                ans++;
            }
            break;
        } else {
            rep(j, b + 1) {
                int bb = aa + j * 100;
                if (bb >= x) {
                    if (bb == x) {
                        ans++;
                    }
                    break;
                }
                rep(k, c + 1) {
                    int cc = bb + k * 50;
                    if (cc >= x) {
                        if (cc == x) {
                            ans++;
                        }
                        break;
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
