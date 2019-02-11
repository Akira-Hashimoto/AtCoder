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
#define vii vector<vector<int> >

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
    int L,N = 0,M = 0;
    cin >> L;
    int x = 0;
    int y = 1;
    while(y < L){
        y *= 2;
        x++;
    }
    N = x;
    M = x * 2;
    cout << x << endl;
    L -= pow(2, x-1);
    int path[20, 2];
    rep(i, 20) {
        path[i, 0] = 0;
    }
    rrrep(i, x, 1) {
        if (L >= pow(2, i) - 1) {
            path[i ,0] = i;
            path[i, 1] = pow(2, i - 1);
        }
    }
    cout << N << " " << M << endl;
    rrrep(i,x,1) {
        cout << i << " " << i+1 << " " << 0 << endl;
        cout << i << " " << i+1 << " " << pow(2, i-1) << endl;
    }
    return 0;
}
