#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long ll;
#define rep(i,n) for(long long int (i)=0;(i)<(int)(n);(i)++)
#define rrep(i,a,b) for(long long int i=(a);i<(b);i++)
#define rrrep(i,a,b) for(long long int i=(a);i>=(b);i--)
#define define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()

const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18;

int main(void) {
    int n, m;
    cin >> n >> m;
    long totalPattern = 1;
    
    vector<int> a, b;
    rep(i,n) {
        int x;
        cin >> x;
        a.push_back(i);
    }
    rep(i,m) {
        int x;
        cin >> x;
        b.push_back(i);
    }
    rrrep(i,n*m,1){
        if (a.contain(i) && b.contain(i)) {
        
        } else if (a.contain(i)) {
            totalPattern *= b.uppercount;
        } else if (b.contain(i)) {
            totalPattern *= a.uppercount;
        } else {
            totalPattern *= a.uppercount * b.uppercount;
        }
    }
    
    return 0;
}