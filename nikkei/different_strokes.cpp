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
    int nab[n, 3];
    vector<int> h;
    map<int, int[2]> x;
    map<int, int> x2;
    rep(i, n) {
        int a,b,c;
        cin >> a >> b;
        c = a + b;
        if (x.find(c) == x.end()){
            auto removeIt = remove_if(h.begin(), h.end(), [&](int value) {
		    return value == 2;
	        });
            h.erase(removeIt, h.end());
            x.erase(c);
        } else {
            h.push_back(c);
            x[c][0] = a;
            x[c][1] = b;
        }
    }
    sort(h.begin(), h.end());
    int count = 0;
    rep(i, h.size()) {
        if (i % 2 == 0) {
            count += h[i];
        } else {
            count -= h[i];
        }
    }
    cout << count << endl;
    return 0;
}
