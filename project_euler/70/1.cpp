#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <deque>
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
typedef vector< double > VD;
typedef vector< string > VS;
typedef istringstream ISS;

#define ALL(x)  (x).begin(), (x).end()
#define SIZE(x) (int)(x).size()
#define FOR(i, a, b)  for (int i=(a); i<(b); ++i)
#define REP(i, n)  FOR(i, 0, n)
#define FORE(i, a, b)  for (int i=(a); i<=(b); ++i)
#define REPE(i, n)  FORE(i, 0, n)
#define FORD(i, a, b)  for (int i=(a); i>=(b); --i)
#define FORSZ(i, a, v)  FOR(i, a, SIZE(v))
#define REPSZ(i, v)  REP(i, SIZE(v))
#define FOREACH(i, x)  for (__typeof((x).begin()) i=(x).begin(); i!=(x).end(); ++i)
#define PB push_back
#define PF push_front
#define MP(a, b)  make_pair(a, b)

template<class T> inline void checkmin(T &a, T b) { if (b<a) a=b; }
template<class T> inline void checkmax(T &a, T b) { if (b>a) a=b; }
template<class T> void print(T A[], int n) { cout<<"{"; for (int i=0; i<n; i++) { cout<<A[i]; if (i+1<n) cout<<", ";} cout<<"}"<<endl; }
template<class T> void print(vector<T> A, int n=-1) { if (n==-1) n=A.size(); cout<<"{"; for (int i=0; i<n; i++) { cout<<A[i]; if (i+1<n) cout<<", "; } cout<<"}"<<endl; }

const long MAX = 10000000;
bitset<MAX> prime(0);

// if bit is 1, then this bit is prime.
void findPrime(bitset<MAX>& prime)
{
    prime.reset();
    prime.flip();
    prime[0] = 0;
    prime[1] = 0;

    for (int i=2; i<=sqrt(MAX-1); i++) {
     	if (prime[i] == 1) {
     	    for (int j=i*i; j<MAX; j+=i) {
     		prime[j] = 0;
     	    }
     	}
    }
}
vector<int> getPhi(int n)
{
    vector<int> phi(n, 1);
    for (int i=1; i<n; i++) {
	// cout << "*** " << i<<endl;
	if (prime[i] == 1) {
	    long long x = i;

	    while (x < n) {
		// cout << i <<" xxx: "<<x<< " "<<t<<endl;
		long long y = x;
		while (y < n) {
		    if (x == i) {
			phi[y] *= x-1;
		    } else {
			phi[y] *= i;
		    }
		    // cout << i <<" xxx: "<<x<< " "<<y << " "<<phi[y]<<endl;
		    y += x;
		}

		x *= i;
	    }
	}
    }

    return phi;
}

bool checkPhi(const vector<int>& v, int n)
{
    VI a(10);
    VI b(10);

    int c = v[n];
    while (c != 0) {
	a[c%10]++;
	c /= 10;
    }
    while (n != 0) {
	b[n%10]++;
	n /= 10;
    }

    if (a == b)
	return true;
    else
	return false;
}
	

int main()
{
    findPrime(prime);
    int n = MAX;

    vector<int> phi = getPhi(n);
    int result = 0;
    double resultRatio = 10.0;

    for (int i=10; i<n; i++) {
	if (checkPhi(phi, i) == false) {
	    continue;
	}
	double tmp = 1.0;
	tmp = tmp*i/phi[i];
 	cout << i << " : " << tmp <<endl;
 	if (tmp < resultRatio) {
 	    resultRatio = tmp;
 	    result = i;
 	}
    }

    cout << result << endl;
    cout << phi[result] << endl;
    cout << phi[87109] << endl;
}
