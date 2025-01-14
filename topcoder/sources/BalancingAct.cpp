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
// BEGIN CUT HERE
////////////////////////////////////////////////////////////////////////////////
template<class T> inline void printv(T A) { cout<<"{ "; for (__typeof((A).begin()) i=(A).begin(); i!=(A).end(); ++i) cout<<*i<<", "; cout<<"}"<<endl; }
template<class T> inline void printv2(T A) { cout<<"{"<<endl; for (__typeof((A).begin()) i=(A).begin(); i!=(A).end(); ++i) {cout<<" { "; for (__typeof((*i).begin()) j=(*i).begin(); j!=(*i).end(); j++) cout<<*j<<", "; cout<<"}"; cout<<endl;} cout<<"}"<<endl; }
template<class T> inline void printp(T A) { cout<<"{ "; for (__typeof((A).begin()) i=(A).begin(); i!=(A).end(); ++i) {cout<<"{"<<i->first<<", "<<i->second<<"}"; cout<<", ";} cout<<" }"<<endl; }
////////////////////////////////////////////////////////////////////////////////
// END CUT HERE

class BalancingAct {
public:
  vector <string> recover(vector <int> labeled, vector <int> unlabeled);

};

vector <string> BalancingAct :: recover(vector <int> labeled, vector <int> unlabeled)
{
  
}

// BEGIN CUT HERE
////////////////////////////////////////////////////////////////////////////////
#define ARRSIZE(x) (sizeof(x)/sizeof(x[0]))

template<typename T> void print( T a ) {
  cout << a;
}
static void print( long long a ) {
  cout << a << "L";
}
static void print( string a ) {
  cout << '"' << a << '"';
}
template<typename T> void print( vector<T> a ) {
  cout << "{";
  for ( int i = 0 ; i != a.size() ; i++ ) {
    if ( i != 0 ) cout << ", ";
    print( a[i] );
  }
  cout << "}" << endl;
}
template<typename T> void eq( int n, T have, T need ) {
  if ( have == need ) {
    cout << "Case " << n << " passed." << endl;
  } else {
    cout << "Case " << n << " failed: expected ";
    print( need );
    cout << " received ";
    print( have );
    cout << "." << endl;
  }
  cout << endl;
}
template<typename T> void eq( int n, vector<T> have, vector<T> need ) {
  if( have.size() != need.size() ) {
    cout << "Case " << n << " failed: returned " << have.size() << " elements; expected " << need.size() << " elements.";
    print( have );
    print( need );
    return;
  }
  for( int i= 0; i < have.size(); i++ ) {
    if( have[i] != need[i] ) {
      cout << "Case " << n << " failed. Expected and returned array differ in position " << i << ".";
      print( have );
      print( need );
      return;
    }
  }
  cout << "Case " << n << " passed." << endl;
  cout << endl;
}
static void eq( int n, string have, string need ) {
  if ( have == need ) {
    cout << "Case " << n << " passed." << endl;
  } else {
    cout << "Case " << n << " failed: expected ";
    print( need );
    cout << " received ";
    print( have );
    cout << "." << endl;
  }
  cout << endl;
}

int main(int argc, char* argv[])
{
      {
        int labeledARRAY[] = {9,13,15,16};
        vector <int> labeled( labeledARRAY, labeledARRAY+ARRSIZE(labeledARRAY) );
        int unlabeledARRAY[] = {19};
        vector <int> unlabeled( unlabeledARRAY, unlabeledARRAY+ARRSIZE(unlabeledARRAY) );
        string retrunValueARRAY[] = {"yes" };
        vector <string> retrunValue( retrunValueARRAY, retrunValueARRAY+ARRSIZE(retrunValueARRAY) );
        BalancingAct theObject;
        eq(0, theObject.recover(labeled, unlabeled),retrunValue);
    }
    {
        int labeledARRAY[] = {20};
        vector <int> labeled( labeledARRAY, labeledARRAY+ARRSIZE(labeledARRAY) );
        int unlabeledARRAY[] = {10,10};
        vector <int> unlabeled( unlabeledARRAY, unlabeledARRAY+ARRSIZE(unlabeledARRAY) );
        string retrunValueARRAY[] = {"yes", "yes" };
        vector <string> retrunValue( retrunValueARRAY, retrunValueARRAY+ARRSIZE(retrunValueARRAY) );
        BalancingAct theObject;
        eq(1, theObject.recover(labeled, unlabeled),retrunValue);
    }
    {
        int labeledARRAY[] = {33333332,33333334};
        vector <int> labeled( labeledARRAY, labeledARRAY+ARRSIZE(labeledARRAY) );
        int unlabeledARRAY[] = {33333333,73,100000000};
        vector <int> unlabeled( unlabeledARRAY, unlabeledARRAY+ARRSIZE(unlabeledARRAY) );
        string retrunValueARRAY[] = {"yes", "no", "yes" };
        vector <string> retrunValue( retrunValueARRAY, retrunValueARRAY+ARRSIZE(retrunValueARRAY) );
        BalancingAct theObject;
        eq(2, theObject.recover(labeled, unlabeled),retrunValue);
    }
    {
        int labeledARRAY[] = {12};
        vector <int> labeled( labeledARRAY, labeledARRAY+ARRSIZE(labeledARRAY) );
        int unlabeledARRAY[] = {1,1,2,2};
        vector <int> unlabeled( unlabeledARRAY, unlabeledARRAY+ARRSIZE(unlabeledARRAY) );
        string retrunValueARRAY[] = {"yes", "yes", "yes", "yes" };
        vector <string> retrunValue( retrunValueARRAY, retrunValueARRAY+ARRSIZE(retrunValueARRAY) );
        BalancingAct theObject;
        eq(3, theObject.recover(labeled, unlabeled),retrunValue);
    }
    {
        int labeledARRAY[] = {31415926,5358979,32384626,43383279,50288419,
           71693993,75105820,9749445,92307816,40628620,
           89986280,34825342,11706798,21480865,13282306};
        vector <int> labeled( labeledARRAY, labeledARRAY+ARRSIZE(labeledARRAY) );
        int unlabeledARRAY[] = {64709384,46095505,82231725,35940812};
        vector <int> unlabeled( unlabeledARRAY, unlabeledARRAY+ARRSIZE(unlabeledARRAY) );
        string retrunValueARRAY[] = {"no", "no", "no", "no" };
        vector <string> retrunValue( retrunValueARRAY, retrunValueARRAY+ARRSIZE(retrunValueARRAY) );
        BalancingAct theObject;
        eq(4, theObject.recover(labeled, unlabeled),retrunValue);
    }
}
////////////////////////////////////////////////////////////////////////////////
// END CUT HERE
