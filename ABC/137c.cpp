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
	cin.tie(0);
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> s(n);
    vector<char> x(10);
    for (int i = 0; i< n; i++) {
        string str;
        cin >> str;
        for(int j = 0; j<10; j++){
            x[j] = str[j];
        }
        sort(x.begin(), x.end());
        string y = "";
        for(int j = 0; j<10;j++){
            y += x[j];
        }
        s[i]=y;
    }
    sort(s.begin(),s.end());
    long long ans = 0;
    int chain = 1;
    string lw = s[0];
    for(int i = 1; i<n;i++){
        if(lw == s[i]) {
            chain++;
        } else {
            if(chain >= 2){
                ans += chain * (chain-1)/2;
            }
            chain = 1;
        }
        lw = s[i];
    }
    if(chain>=2){
        ans += chain*(chain-1)/2;
    }
    cout << ans <<endl;
    return 0;
}
