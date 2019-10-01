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
#define vppl vector<pair<long, pair<long, long> > >

const int INF = 100100100;
const long LONG_INF = 2147483647;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18;


int pow(int x) {
	if (x == 0) {
		return 1;
	}
	else {
		return pow(x - 1) * 2;
	}
}

int x[200000];
int main(int argc, char const *argv[])
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    ll n,k;
    cin >> n >> k;
    int a[n];
    vi s;
    rep(i,n) {
        cin >> a[i];
        x[a[i]] += 1*k;
    }
    ll target = 0;
    rep(j,k) {
    rep(i,n) {
        if (target == 0)
        {
            if (x[a[i]] >= 2)
            {
                target = a[i];
            } else
            {
                s.push_back(a[i]);
            }
            
        } else
        {
            if (target == a[i])
            {
                target = 0;
            }
        }
        x[a[i]] -= 1;
    }
    }
    rep(i,s.size()){
        cout << s[i] << " ";
    }
    return 0;
}
