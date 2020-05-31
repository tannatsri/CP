// 31/05/2020  @ 20:40:20
// *****************************************************************
// *****************************************************************
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <stack>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>
// *****************************************************************
// *****************************************************************
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define fr(i, n) for (llu i = 0; i < n; i++)
#define fl(j, a, b) for (llu j = a; j <= b; j++)
#define pi 3.14159265
#define mod 1e9 + 7
#define MID(a, b) ((a + b) >> 1)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
// *****************************************************************
// *****************************************************************
typedef long long unsigned int llu;
typedef long long int ll;
// *****************************************************************
// *****************************************************************
using namespace std;
// *****************************************************************
// *****************************************************************

// Dream it. Wish it. Do it.

// tannatsri //

// Without tact you can learn nothing.

// *****************************************************************
// *****************************************************************
template <class Iterator, class T>
// template<typename TT>
// *****************************************************************
// *****************************************************************
Iterator search(Iterator start, Iterator end, T key)
{
    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        ++start;
    }
    return end;
}
bool rev(int a, int b)
{
    return a > b;
}
// *****************************************************************
// *****************************************************************
int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    // *****************************************************************
    // *****************************************************************
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int a1 = 0, a2 = 0;
        ll pre1[n] = {0}, pre0[n] = {0} ,suff1[n] = {0}, suff0[n] = {0};
        fr(i, n)
        {
            if (i)
            {
                pre1[i] = pre1[i - 1];
                pre0[i] = pre0[i - 1];
            }
            if (s[i] == '0')
                pre0[i]++;
            else
                pre1[i]++;
        }
        for (int i = n - 1; i >= 0; --i)
        {
            if (i != n - 1)
            {
                suff1[i] = suff1[i + 1];
                suff0[i] = suff0[i + 1];
            }
            if (s[i] == '0')
                suff0[i]++;
            else
                suff1[i]++;
        }
        int ans = n + 1;
        fr(i, n - 1)
        {
            ans = MIN(ans, MIN(pre1[i] + suff0[i + 1], pre0[i] + suff1[i + 1]));
            // cout << ans << endl ;
        }
        ans = MIN(ans, MIN(pre1[n - 1], pre0[n - 1]));
        cout << ans << endl;
    }
    return 0;
}