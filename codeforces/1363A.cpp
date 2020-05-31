// 31/05/2020  @ 20:05:11
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
        int n, x;
        cin >> n >> x;
        // int a[n];
        // int e = 0;
        // int o = 0;
        // fr(i, n) {
        //     cin >> a[i];
        //     if(a[i]&1) o++;
        //     else e++;
        // }

        int v[n];
        int no = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] & 1)
                no++;
        }

        int ne = n - no;
        if (x == n)
        {
            if (no % 2 != 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if(ne == 0 and x%2 == 0) cout << "No" << endl;
        else if (no >= 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        // cout << "No" << endl;
    }
    return 0;
}