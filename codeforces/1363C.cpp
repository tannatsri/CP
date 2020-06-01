// 31/05/2020  @ 21:30:43
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
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<vector<int>> edge(n + 1);
        int degree[n + 1] = {0};
        int xx, y;
        fr(i, n - 1) {
            cin >> xx >> y;
            edge[xx].push_back(y);
            edge[y].push_back(xx);

            degree[xx]++;
            degree[y]++;

        }
        if(n <= 2 or degree[x] <= 1) { cout << "Ayush\n";}
        else if(n % 2) cout << "Ashish\n";
        else cout << "Ayush\n";



    }
    return 0;
}