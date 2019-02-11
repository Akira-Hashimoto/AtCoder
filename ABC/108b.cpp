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
    int x1, y1, x2, y2, x3, x4, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int deltaX, deltaY;
    deltaX = x2 - x1;
    deltaY = y2 - x1;
    x4 = -(y2 - y1) + x1;
    y4 = (x2 - x1) + y1;
    x3 = -(y1 - y4) + x4;
    y3 = (x1 - x4) + y4;
    cout << x3 << " " << y3 << " " << x4 << " " << y4;


    return 0;
}
