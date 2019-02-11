#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

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

int main(int argc, char const *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;
    int answer1, answer2;
    if (a > b) {
        answer1 = b;
    } else {
        answer1 = a;
    }
    if (a + b <= n) {
        answer2 = 0;
    } else {
        answer2 = a + b - n;
    }
    cout << answer1 << " " << answer2 << endl;

    return 0;
}
