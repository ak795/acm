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
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

class ParallelSpeedup
{ 
public: 
  int numProcessors(int k, int overhead);
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 12; int Arg1 = 1; int Arg2 = 2; verify_case(0, Arg2, numProcessors(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 50; int Arg1 = 3; int Arg2 = 3; verify_case(1, Arg2, numProcessors(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 9; int Arg1 = 10; int Arg2 = 1; verify_case(2, Arg2, numProcessors(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 3333; int Arg1 = 2; int Arg2 = 12; verify_case(3, Arg2, numProcessors(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 1000000; int Arg1 = 4; int Arg2 = 63; verify_case(4, Arg2, numProcessors(Arg0, Arg1)); }

// END CUT HERE
 
}; 
// BEGIN CUT HERE 
////////////////////////////////////////////////////////////////////////////////
template<class T> inline void print(T A) { cout<<"{ "; for (__typeof((A).begin()) i=(A).begin(); i!=(A).end(); ++i) cout<<*i<<", "; cout<<"}"<<endl; }
template<class T> inline void print2(T A) { cout<<"{"<<endl; for (__typeof((A).begin()) i=(A).begin(); i!=(A).end(); ++i) {cout<<" { "; for (__typeof((*i).begin()) j=(*i).begin(); j!=(*i).end(); j++) cout<<*j<<", "; cout<<"}"; cout<<endl;} cout<<"}"<<endl; }
template<class T> inline void printp(T A) { cout<<"{ "; for (__typeof((A).begin()) i=(A).begin(); i!=(A).end(); ++i) {cout<<"{"<<i->first<<", "<<i->second<<"}"; cout<<", ";} cout<<" }"<<endl; }

int main()
{
  ParallelSpeedup ___test; 
  ___test.run_test(-1); 
} 
////////////////////////////////////////////////////////////////////////////////
// END CUT HERE 

int ParallelSpeedup :: numProcessors(int k, int overhead)
{
  long long m=INT_MAX;
  int res=1;
  
  for (int i=1; i<=k; ++i) {
    long long tmp=0;
    tmp=k/i;
    if (k%i) tmp++;
    tmp+=1LL*overhead*i*(i-1)/2;
    if (tmp<m) m=tmp, res=i;
  }
  return res;
}
