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
#define rrep1(i,a,b) for(ll i=(a);i<=(b);i++)
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
    ll a,b;
    cin >> a >> b;
    ll x,y;
    ll c = a & 11, d = b & 11;
    
    if (c == 0) {
        x = 0;
    } else if (c == 1)
    {
        x = a ^ (a+1) ^ (1+2);
    } else if (c == 2)
    {
        x = a ^ (a+1);
    } else
    {
        x = a;
    }
    
    if (d == 3){
        y = 0;
    } else if (d == 2)
    {
        y = b ^ (b - 1) ^ (b - 2);
    } else if (d == 1)
    {
        y = b ^ (b - 1);
    } else
    {
        y = b;
    }
    ll ans = x ^ y;
    
    cout << ans << endl;
    
    
    // bool c = true, d = true;
    // ll e = 1, f = 1;
    // ll ansa = 0, ansb = 0;
    // while(c){
    //     if (a >= e) {
    //         e = e << 1;
    //     } else
    //     {
    //         rrep1(i,a,e-1){
    //             ansa = ansa ^ i;
    //         }
    //         c = false;
    //     }   
    // }
    
    // while(d){
    //     if (b >= f) {
    //         f = f << 1;
    //     } else
    //     {
    //         f = f >> 1;
    //         rrep1(i,f,b){
    //             ansb = ansb ^ i;
    //         }
    //         d = false;
    //     }   
    // }
    // cout << (ansa ^ ansb) << endl;
    return 0;
}
