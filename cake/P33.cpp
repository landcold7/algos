#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;

#define debug
#ifdef debug
#define pr(x) printf x 
#else   
#define pr(x) do { if (0) printf x; } while (0) 
#endif

#define prt printf
#define fori(i, a, b) for (int i=(a); i<(b); ++i)
#define ford(i, a, b) for (int i=(a); i>(b); --i)
#define fora(e, c) for (auto &e : c)
#define all(x) (x).begin(), (x).end()
#define mst(X, v) memset((X), (v), sizeof((X)))
#define len(X) strlen(X)
#define vi vector<int>
#define sz(x) ((int)(x).size())
#define pii pair<int, int>
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define cerr(x) cerr << #x " is " << (x) << endl
const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS) {
  return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

int find(vector<int> v) {
  int n = sz(v);
  int a=0, b=0;
  fori(i, 0, n-1)
    a ^= i;
  fora(x, v)
    b ^= x; 
  return a^b;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cout << find({0, 1, 2, 3, 3}) << '\n';
}