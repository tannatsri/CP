// 02/06/2020  @ 13:59:16
// *****************************************************************
// *****************************************************************
#include <bits/stdc++.h>
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
bool rev(int a, int b) {
    return a > b;
}
// *****************************************************************
// *****************************************************************
int main() {
    IOS;
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("C:/Users/Mr.Tanishq/Desktop/noc/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:/Users/Mr.Tanishq/Desktop/noc/output.txt", "w", stdout);
    #endif
    // *****************************************************************
    // *****************************************************************
    int t = 1;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int m1 = -1, m2 = -1, m3 = -1;
        int n = s.size();
        bool f1 = true;
        bool f2 = true;
        int p1 = 0, p2 = 0;

        fr(i, n) {
            int ii = i+1;

            if(m1 == -1 and s[i] == 'R') {
                p2 = ii;
                m1 = ii;
            }
            if(s[i] == 'R') m2 = ii;
            if(s[i] == 'R') {
                p1 = ii;
                m3 = MAX(m3, p1 - p2);
                p2 = p1;
            }

        }
        m2 = n - m2 + 1;
        if(m1 == -1) cout << n+1 << "\n";
        else
        cout << MAX(m1, MAX(m2 ,m3)) << "\n";

    }
    return 0;
}