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
#include "/home/Aphrodite/program/acm/topcoder/libs/debug.cpp"
#endif

/*******************************************************************************
 *                                                                             *
 *                  To see the world in a grain of sand,                       *
 *                  And a heaven in a wild flower;                             *
 *                  Hold infinity in the palm of your hand,                    *
 *                  And eternity in an hour.                                   *
 *                                                                             *
 ******************************************************************************/

const int MAX = 2005;
long long a[MAX], dp[MAX][MAX];
int upper[MAX];

void init_upper()
{
    int idx = 1, aux = 2;
    while (idx < MAX) {
        for (int i = 0; i < aux; ++i) {
            upper[idx++] = aux;
            if (idx == MAX) break;
        }
        aux <<= 1;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[n - i];
    for (int i = 1; i <= n; ++i)
        a[i] += a[i - 1];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= min(i, upper[n - i + 1]); ++j)
            for (int k = 1; k <= j; ++k)
                dp[i][j] = max(dp[i][j], a[i] - dp[i - k][min(i - k, 2 * k)]);
    cout << dp[n][2] << endl;
}
