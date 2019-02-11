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

bool vector_finder(vector<int> vec, int number) {
  auto itr = find(vec.begin(), vec.end(), number);
  size_t index = distance( vec.begin(), itr );
  if (index != vec.size()) {
    return true;
  }
  else {
    return false;
  }
}

int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    vector<int> x;
    rep(i,1000000) {
        if(vector_finder(x, a)) {
            cout << i + 1 << endl;
            return 0;
        } else {
            x.push_back(a);
            if (a % 2 == 0) {
                a /= 2;
            } else {
                a = a * 3 + 1;
            }
        }
    }
    return 0;
}
