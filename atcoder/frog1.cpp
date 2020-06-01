// 25/05/2020  @ 10:47:49
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
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fr(i,n) for(llu i=0;i<n;i++)
#define fl(j,a,b) for(llu j=a;j<=b;j++)
#define pi 3.14159265
#define mod 1e9+7
#define MID(a,b) ((a + b) >> 1)
#define MAX(a,b) ((a) > (b) ? (a): (b))
#define MIN(a,b) ((a) < (b) ? (a) :(b))
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
template< class Iterator,  class T>
// template<typename TT>
// *****************************************************************
// *****************************************************************
Iterator search(Iterator start, Iterator end, T key) {
    while(start != end) {
        if(*start == key){
            return start;
        }
        ++start;
    }
    return end;
}
bool rev(int a, int b) {
    return a > b;
}






// *****************************************************************
// *****************************************************************
int main() {
    IOS;
    int n;
    cin >> n;
    ll a[n + 1];
    fl(i,1,  n) cin >> a[i];
    ll dp[n + 1] = {0};
    dp[1] = 0;
    dp[2] = abs(a[1] - a[2]);
    fl(i, 3, n) {
        dp[i] = MIN(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
    }
    cout << dp[n] <<"\n";

    return 0;
}