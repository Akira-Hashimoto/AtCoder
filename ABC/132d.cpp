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

std::vector<std::vector<long long>> comb(int n, int r) {
  std::vector<std::vector<long long>> v(n + 1,std::vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v;
}

int main(int argc, char const *argv[])
{
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int blue = k, red = n-k;
    vector<vector<long long>> vb = comb(blue-1, red);
    vector<vector<long long>> vr = comb();
    if (red < 2)
    {
        rep(i,blue) {
            if (i == 0)
            {
                cout << 1 << endl;
            } else
            {
                cout << 0 << endl;
            }
        }
    }
    
    rep(i,blue){
        cout <<  % MOD;
    }

    return 0;
}
