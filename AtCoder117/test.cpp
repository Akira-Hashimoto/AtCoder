#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <cstdlib>

using namespace std;

typedef long long ll;
#define rep(i, n) for(long (i) = 0; (i) < (long) (n); (i)++)
#define rrep(i,a,b) for(long i=(a);i<(b);i++)
#define rrrep(i,a,b) for(long i=(a);i>=(b);i--)
#define define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()

const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18;

int printYes() {
    cout << "Yes" << endl;
    return 0;
}

int printNo() {
    cout << "No" << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    long N, M;
    cin >> N >> M;
    if (N >= M) {
        cout << 0 << endl;
    }
    
    vector<long> vec;
    rep(i, M) {
        long a;
        cin >> a;
        vec.push_back(a);
    }
    sort(ALL(vec));
    vector<long> sub;
    rep(i, M -1) {
        sub.push_back(vec[i + 1] - vec[i]);
    }
    sort(ALL(sub));
    long ans = 0;
    rep(i, M - N) {
        ans += sub[i];
    }
    cout << ans << endl;
    return 0;
}
