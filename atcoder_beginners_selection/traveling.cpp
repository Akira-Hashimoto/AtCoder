#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <cstdlib>

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

int printYes() {
    cout << "Yes" << endl;
    return 0;
}

int printNo() {
    cout << "No" << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    vector<pair<int, pair<int, int> > > vec;
    rep(i, N) {
        int t, x, y;
        cin >> t >> x >> y;
        vec.push_back(make_pair(t, make_pair(x,y)));
    }
    int t = 0,x = 0,y = 0;
    rep(i, N) {
        if (vec[i].first - t >= abs(vec[i].second.first - x) + abs(vec[i].second.second - y)&&
        (4 - (vec[i].first - t) % 4) == (4 - (abs(vec[i].second.first - x) - abs(vec[i].second.second - y) % 4))) {
            t = vec[i].first;
            x = vec[i].second.first;
            y = vec[i].second.second;
        } else {
            return printNo();
        }
    }
    printYes();
    return 0;
}
