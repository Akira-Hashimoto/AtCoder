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
#define vla(i) vector<ll[i]>
#define vl vector<ll>
#define vvi vector<vector<int> >
#define vpl vector<pair<long, long> >
#define vppl vector<pair<long, pair<long, long> > >

const int INF = 100100100;
const long LONG_INF = 2147483647;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18;

ll nc2size[100000];

void debug(string name, int x) {
    cout << name << "=" << x << endl;
}

ll nc2(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (nc2size[n] == 0) nc2size[n] = nc2(n-1) * n / (n - 2);
    return nc2size[n];
}

struct UnionFind {
    vector<int> parent;
    vector<int> size;
 
    UnionFind(int n) : parent(n), size(n) {
        for (int i = 0; i < n; i++) parent[i] = i;
        for (int i = 0; i < n; i++) size[i] = 1;
    }
 
    int root(int x) {
        if (parent[x] == x) return x;
        else return parent[x] = root(parent[x]);
    }
 
    void unite(int x, int y) {
        int rootX = root(x);
        int rootY = root(y);
        if (rootX == rootY) return;
        parent[rootX] = rootY;
        size[rootY] = size[rootX] + size[rootY];
    }

    void unite(pair<int, int> p) {
        unite(p.first, p.second);
    }
 
    bool same(int x, int y) {
        return root(x) == root(y);
    }

    bool same(pair<int,int> p) {
        return same(p.first, p.second);
    }
 
    int count() {
        int counter = 0;
        for (int i = 0; i < parent.size(); i++) {
            if (parent[i] == i) ++counter;
        }
		return counter;
    }

    int sizeX(int x) {
        return size[root(x)];
    }
};


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
    int n,m;
    cin >>n>>m;
    UnionFind t(n);
    ll total[m+1];
    ll inc[m+1];
    for (int i = 0; i < m+1; i++)
    {
        total[i] = 0;
        inc[i] = 0;
    }
    pair<ll,ll> p[m];
    for (int i = 0; i < m; i++)
    {
        cin >> p[i].first >> p[i].second;
        p[i].first--;
        p[i].second--;
    }
    for (int i = m-1; i >= 0; i--)
    {
        if (t.same(p[i])) continue;
        ll osize = nc2(t.sizeX(p[i].first)) + nc2(t.sizeX(p[i].second));
        t.unite(p[i]);
        total[i] = total[i+1] + nc2(t.sizeX(p[i].first))-osize;
        inc[i] = total[i]-total[i+1];
    }
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        ans += inc[i];
        cout << ans << endl;
    }
    return 0;
}

