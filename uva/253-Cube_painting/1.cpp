#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

typedef long long LL;
typedef vector< int > VI;
typedef vector< VI > VVI;
typedef vector< LL > VLL;
typedef vector< VLL > VVLL;
typedef vector< double > VD;
typedef vector< string > VS;
typedef pair< int, int > II;
typedef vector< II > VII;
typedef vector< VII > VVII;
typedef istringstream ISS;
typedef ostringstream OSS;

#define A(x)  (x).begin(), (x).end()
#define SZ(x) (int)(x).size()
#define F(i, a, b)  for (int i=(a); i<(b); ++i)
#define R(i, n)  F(i, 0, n)
#define FE(i, a, b)  for (int i=(a); i<=(b); ++i)
#define RE(i, n)  FE(i, 0, n)
#define FD(i, a, b)  for (int i=(a); i>=(b); --i)
#define RD(i, n) FD(i, n, 0)
#define FSZ(i, a, v)  F(i, a, SZ(v))
#define RSZ(i, v)  R(i, SZ(v))
#define FDSZ(i, a, v) FD(i, SZ(v)-1, a)
#define RDSZ(i, v) RD(i, SZ(v)-1)
#define FA(i, a, x)  for (__typeof((x).begin()) i=(a); i!=(x).end(); ++i)
#define RA(i, x)  FA(i, (x).begin(), x)
#define FDA(i, a, x)  for (__typeof((x).rbegin()) i=(x).rbegin(); i!=(a); ++i)
#define RDA(i, x)  FDA(i, (x).rend(), x)
#define P(v, x) (v.find(x) != v.end())
#define PO(v, x) (find(A(v), x) != v.end())
#define UN(a) sort(A(a)), a.erase(unique(A(a)), a.end())
#define CL(a, b) memset(a, b, sizeof(a))
#define MP(a, b)  make_pair(a, b)
#define CAST(x, type) *({ OSS oss; oss << (x); ISS iss(oss.str()); static type _cast_ret; iss >> _cast_ret; &_cast_ret; })
#define pb push_back
#define pf push_front
#define X first
#define Y second

template<class T> inline void checkmin(T &a, T b) { if (b<a) a=b; }
template<class T> inline void checkmax(T &a, T b) { if (b>a) a=b; }
template<class T> inline void print(T A[], int n) { cout<<"{"; for (int i=0; i<n; i++) { cout<<A[i]; if (i+1<n) cout<<", ";} cout<<"}"<<endl; }
template<class T> inline void print(vector<T> A, int n=-1) { if (n==-1) n=A.size(); cout<<"{"; for (int i=0; i<n; i++) { cout<<A[i]; if (i+1<n) cout<<", "; } cout<<"}"<<endl; }
template<class T> inline void print(T A) { cout<<"{"; RA(i, A) { cout<<*i<<", "; } cout<<"}"<<endl; }
template<class T> inline T gcd(T a, T b) { while (b != 0) { T r=a%b; a=b; b=r; } return a; }


void r1(string& s)
{
    char c = s[0];
    s[0] = s[4];
    s[4] = s[5];
    s[5] = s[1];
    s[1] = c;
}

void r2(string& s)
{
    char c = s[1];
    s[1] = s[3];
    s[3] = s[4];
    s[4] = s[2];
    s[2] = c;
}

void r3(string& s)
{
    char c = s[0];
    s[0] = s[3];
    s[3] = s[5];
    s[5] = s[2];
    s[2] = c;
}

string rotate(string s, int x, int y, int z, int k)
{
    if (k == 0) {
	R(i, x) r1(s);
	R(i, y) r2(s);
	R(i, z) r3(s);
    } else if (k == 1) {
	R(i, x) r1(s);
	R(i, z) r3(s);
	R(i, y) r2(s);
    } else if (k == 2) {
	R(i, y) r2(s);
	R(i, x) r1(s);
	R(i, z) r3(s);
    } else if (k == 3) {
	R(i, y) r2(s);
	R(i, z) r3(s);
	R(i, x) r1(s);
    } else if (k == 4) {
	R(i, z) r3(s);
	R(i, x) r1(s);
	R(i, y) r2(s);
    } else if (k == 5) {
	R(i, z) r3(s);
	R(i, y) r2(s);
	R(i, x) r1(s);
    }
    return s;
}

bool check(string s1, string s2)
{
    R(i, 3) R(j, 3) R(k, 3)
	R(k, 6) if (rotate(s1, i, j, k, k) == s2) return true;
    return false;
}

int main()
{
    string s;
    while (getline(cin, s)) {
	string s1 = s.substr(0, 6);
	string s2 = s.substr(6);
	if (check(s1, s2)) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;
    }
}
