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
#define X first
#define Y second
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int> >
#define vpl vector<pair<long, long> >
#define vppl vector<pair<long, pair<long, long> > >

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
    int n,m;
    cin >> n >> m;
    vppl v(n);
    rep(i,n) {
        cin >> v[i].X >> v[i].Y.X >> v[i].Y.Y;
    }
    vl v1(n), v2(n),v3(n),v4(n),v5(n),v6(n), v7(n), v8(n);
    rep(i,n) {
        v1[i] = v[i].X + v[i].Y.X + v[i].Y.Y;
        v2[i] = v[i].X - v[i].Y.X + v[i].Y.Y;
        v3[i] = v[i].X - v[i].Y.X - v[i].Y.Y;
        v4[i] = v[i].X + v[i].Y.X - v[i].Y.Y;
        v5[i] = - v[i].X + v[i].Y.X + v[i].Y.Y;
        v6[i] = - v[i].X - v[i].Y.X + v[i].Y.Y;
        v7[i] = - v[i].X - v[i].Y.X - v[i].Y.Y;
        v8[i] = - v[i].X + v[i].Y.X - v[i].Y.Y;
    }
    sort(ALLG(v1));
    sort(ALLG(v2));
    sort(ALLG(v3));
    sort(ALLG(v4));
    sort(ALLG(v5));
    sort(ALLG(v6));
    sort(ALLG(v7));
    sort(ALLG(v8));
    vl vmax(8);
    rep(i,8) {
        vmax[i] = 0;
    }
    rep(i,m){
        vmax[0] += v1[i];
        vmax[1] += v2[i];
        vmax[2] += v3[i];
        vmax[3] += v4[i];
        vmax[4] += v5[i];
        vmax[5] += v6[i];
        vmax[6] += v7[i];
        vmax[7] += v8[i];
    }
    sort(ALLG(vmax));
    cout << vmax[0] << endl;
    return 0;
}
