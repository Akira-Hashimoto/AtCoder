#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <cstdlib>
#include <math.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for(long (i) = 0; (i) < (long) (n); (i)++)
#define rep1(i,n) for(int i=1;i<=(n);i++)
#define rrep(i,a,b) for(long i=(a);i<(b);i++)
#define rrep1(i,a,b) for(long i=(a);i<=(b);i++)
#define rrrep(i,a,b) for(long i=(a);i>=(b);i--)
#define define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()
#define ALLG(obj) (obj).begin(), (obj).end(), greater<long>()
#define ALLGP(obj) (obj).begin(), (obj).end(), greater<pair<long, long> >()
#define X first
#define Y second
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int> >
#define vpl vector<pair<long, long> >

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

int ans;

int printAns() {
    cout << ans << endl;
    return 0;
}


int pow(int x) {
	if (x == 0) {
		return 1;
	}
	else {
		return pow(x - 1) * 2;
	}
}

int main(int argc, char const *argv[])
{
    int N,M,Q;
    cin >> N >> M >> Q;
    vpl vm(M), vq(Q);
    rep(i,M){
        cin >> vm[i].X >> vm[i].Y;
    }
    rep(i,Q){
        cin >> vq[i].X >> vq[i].Y;
    }
    int pattern[N][N];
    rep(i,N) {
        rrrep(j,N,i){
            pattern[i][j] = 0;
        }
    }
    rep(m,M) {
        rep(x, vm[m].X) {
            rrrep(y, N - 1, vm[m].Y-1) {
                pattern[x][y]++;
            }
        }
    }
    rep(q, Q){
        cout << pattern[vq[q].X - 1][vq[q].Y - 1] << endl;
    }
    return 0;
}
