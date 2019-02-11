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
#define rrep(i,a,b) for(long i=(a);i<(b);i++)
#define rrrep(i,a,b) for(long i=(a);i>=(b);i--)
#define define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()
#define X first
#define Y second
#define vi vector<int>
#define vl vector<ll>
#define vii vector<vector<int> >

const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18;

int ans;

int printYes() {
    cout << "Yes" << endl;
    return 0;
}

int printNo() {
    cout << "No" << endl;
    return 0;
}

int printAns() {
    cout << ans << endl;
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
    long N,K;
    cin >> N >> K;
    vector<long> vec;
    int kdigit = 1;
    rep(i, 40) {
        long x = powf(2, i+1);
        if (K >= x) {
            kdigit = i+1;
        } else
        {
            break;   
        }
    }
    long nzyou[40];
    rep(i, 40) {
        nzyou[i] = 0;
    }
    rep(i,N) {
        long a;
        cin >> a;
        rep(i, 40) {
            long x = powf(2, i+1);
            if (a % x != 0) {
                nzyou[i]++;
                a -= powf(2,i);
            }
            if (a == 0) {
                break;
            }
        }
    }
    long total = 0;
    long rnzyou[40];
    rep(i, 40) {
        rnzyou[i] = 0;
    }
    rep(i, 40) {
        rnzyou[i] = N - nzyou[i];
    }
    rep(i, 40) {
        if (nzyou[i] >= rnzyou[i]) {
            total += nzyou[i] * powf(2, i+1);
        } else
        {
            total += rnzyou[i] * powf(2, i+1);
        }
    }
    cout << total;
    return 0;
}
