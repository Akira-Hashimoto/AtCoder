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
    string s;
    cin >> s;
    int n = s.length();
    ll dp[n][13];
    for(int i = 0;i<=n-1;i++) {
        for(int j = 0;j<13;j++) dp[i][j]=0;
    }
    // 初期化
    if (s[n-1]=='?')
    {
        for(int i=0;i<=9;i++){
            dp[0][i]=1;
        }
    } else{
        int a = s[n-1]-'0';
        dp[0][a]=1;
    }
    int pow = 10;

    for(int i=1;i<n;i++){
        char x = s[n-i-1];
        int a = x - '0';
        if (x=='?')
        {
            // j 0~9
            for (int j = 0; j <=9 ; j++)
            {
                // 0~12
                for(int k=0;k<=12;k++)   {
                    int b = (j*pow + k) % 13;
                    dp[i][b]+=dp[i-1][k]%MOD;
                }
            }
        } else {
            for (int j = 0; j<=12;j++){
                int b = (j + a*pow) %13;
                dp[i][b] += dp[i-1][j]%MOD;
            }
        }
        pow *= 10;
        pow %= 13;
    }
    cout << dp[n-1][5]%MOD << endl;
    return 0;
}
