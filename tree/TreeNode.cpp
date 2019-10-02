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

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) {
        this -> val = x;
        this -> left = nullptr;
        this -> right = nullptr;
    }
    
    void insert(int x) {
        TreeNode* curNode = this;
        while (curNode == nullptr) {
            if (x < curNode -> val) {
                // left の方で処理
                if (curNode -> left == nullptr) curNode -> left = new TreeNode(x);
                else curNode = curNode -> left;
            } else if (x > curNode -> val) {
                // right で処理
                if (curNode -> right == nullptr) curNode -> right = new TreeNode(x);
                else curNode = curNode -> right;
            }
        }
    }
    
    bool search(int x) {
        TreeNode* curNode = this;
        while (curNode != nullptr) {
            if (x == curNode -> val) return true;
            else if (x < curNode -> val) curNode = curNode -> left;
            else curNode = curNode -> right;
        }

        return false;
    }

    // 絶対に存在する値が入ってくる
    void deleteNode(int x) {
        TreeNode* targetNode = nullptr;
        TreeNode* curNode = this;
        // 削除対象のノードを探す。
        while (curNode != nullptr) {
            if (x == curNode -> val) {
                targetNode = curNode;
                break;
            } else if (x < curNode -> val) {
                curNode = curNode -> left;
            } else curNode = curNode -> right;
        }
        // スワップ対象を探しに行く。
        TreeNode* swapNode = nullptr;
        TreeNode* nextMin = curNode -> left;
        TreeNode* parentNode = nullptr;
        // 次に小さい値 -> 初めは左、次からは右、それ以上右に行けない場所
        while (nextMin != nullptr) {
            if (nextMin -> right == nullptr) {
                swapNode = nextMin;
                break;
            } else {
                parentNode = nextMin;
                nextMin = nextMin -> right;
            }
        }
        // 次に大きい値
        TreeNode* nextMax = curNode -> right;
        while (swapNode == nullptr && nextMax != nullptr) {
            if (nextMax -> left == nullptr) {
                swapNode = nextMax;
                break;
            } else {
                parentNode = nextMax;
                nextMax = nextMax -> left;
            }
        }

        if (swapNode == nullptr) {
            if (parentNode -> left == targetNode) parentNode -> left = nullptr;
            else if (parentNode -> right == targetNode) parentNode -> right = nullptr;
        } else {
            // target と値を入れ替える
            targetNode -> val = swapNode -> val;
            if (swapNode -> left == nullptr && swapNode -> right == nullptr) {
                if (parentNode -> left == swapNode) parentNode -> left = nullptr;
                else if (parentNode -> right == swapNode) parentNode -> right = nullptr;
            } else if (swapNode -> left == nullptr) {
                swapNode = swapNode -> right;
            } else if (swapNode -> right == nullptr) {
                swapNode = swapNode -> left;
            }
        }
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

    return 0;
}
