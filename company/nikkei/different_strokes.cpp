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
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long ans = 0;
    vector<pair<ll, pair<int, int> > > h;
    rep(i, n) {
        int a,b;
        cin >> a >> b;
        h.push_back(make_pair(a + b, make_pair(a,b)));
    }

    sort(ALL(h));
    reverse(ALL(h));

    rep(i, h.size()) {
        if (i % 2 == 0) {
            ans += h[i].second.first;
        } else {
            ans -= h[i].second.second;
        }
    }
    cout << ans << endl;
    return 0;
}
