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

#ifdef DEBUG
#include "/home/rock/program/topcoder/libs/debug.cpp"
#endif

/*******************************************************************************
 *                                                                             *
 *                  To see the world in a grain of sand,                       *
 *                  And a heaven in a wild flower;                             *
 *                  Hold infinity in the palm of your hand,                    *
 *                  And eternity in an hour.                                   *
 *                                                                             *
 ******************************************************************************/

int a[100005];

int main()
{
    int n;
    while (cin >> n && n) {
        for (int i = 0; i < n; ++i) scanf("%d", &a[i]), --a[i];
        bool ok = true;
        for (int i = 0; i < n; ++i) 
            if (a[a[i]] != i) { ok = false; break; }
        cout << (ok? "ambiguous" : "not ambiguous") << endl;
    }
}
