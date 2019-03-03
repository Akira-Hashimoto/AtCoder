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

int main(int argc, char const *argv[])
{
    int N,C;
    cin >> N >> C;
    int a[C][C];
    rep(i,C) {
        rep(j,C) {
            cin >> a[i][j];
        }
    }
    vi a1,a2,a3;
    rep(i,N){
        rep(j,N){
            int x;
            cin >> x;
            if ((i + j)%3==0) {
                a1.push_back(x);
            } else if ((i+j)%3==1)
            {
                a2.push_back(x);
            } else
            {
                a3.push_back(x);
            }
        }
    }
    vpl b1,b2,b3;
    rep(j,C){
        long total = 0;
        rep(i, a1.size()) {
            total += a[a1[i]-1][j];
        }
        b1.push_back(make_pair(total,j));
    }
    rep(j,C){
        long total = 0;
        rep(i, a2.size()) {
            total += a[a2[i]-1][j];
        }
        b2.push_back(make_pair(total,j));
    }
    rep(j,C){
        long total = 0;

        rep(i, a3.size()) {
            total += a[a3[i]-1][j];
        }
        b3.push_back(make_pair(total,j));
    }
    sort(ALL(b1));
    sort(ALL(b2));
    sort(ALL(b3));
    long min = 2147483647;
    if (N ==1) { // 1の場合パターンはb2, b3に値が入っていないためケア
        cout << b1[0].first << endl;
        return 0;
    }
    
    rep(i,3){
        rep(j,3){
            rep(k,3){
                if (b1[i].second == b2[j].second || b1[i].second == b3[k].second || b2[j].second == b3[k].second) {
                    continue;
                }
                int total = b1[i].first + b2[j].first + b3[k].first;
                if (total < min) {
                    min = total;
                }
            }
        }
    }

    cout << min;
    
    return 0;
}
