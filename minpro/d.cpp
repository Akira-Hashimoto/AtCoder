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
    cout << "YES" << endl;
    return 0;
}

int printNo() {
    cout << "NO" << endl;
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
    int l;
    cin >>l;
    int a[l];
    int t,z = 0;
    vpl v;
    ll min = INF;
    rep(i,l) {
        cin >> a[i];
        if (a[i] == 0) {
            z++;
        } else
        {
            if (z != 0) {
                v.push_back({t,z});
                t = 0;
                z = 0;
            }
            t += a[i];
        }
    }
    ll even = 0, odd = 0;
    rep(i, l){
        if () {
            /* code */
        }
        
    }
    rep(i,l) {
        if (/* condition */) {
            /* code */
        }
        
    }
    return 0;
}
