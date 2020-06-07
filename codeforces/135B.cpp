// 07/06/2020  @ 20:17:44
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
    // #ifndef ONLINE_JUDGE
    // // for getting input from input.txt
    // freopen("C:/Users/Mr.Tanishq/Desktop/noc/input.txt", "r", stdin);
    // // for writing output to output.txt
    // freopen("C:/Users/Mr.Tanishq/Desktop/noc/output.txt", "w", stdout);
    // #endif
    // *****************************************************************
    // *****************************************************************
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], b[n], c[n];
        fr(i, n) {cin >> a[i];
        c[i] = a[i];}
        sort(c, c + n);
        int c0 = 0, c1 = 0;

        fr(i, n){
            cin >> b[i];
            if(b[i] == 0) c0++;
            else c1++;
        }
        int t = 0;
        bool status = true;

        bool flag = true;

        fr(i, n - 1){
            if(a[i] > a[i + 1]){
            flag = false; break;}
        }
        if(c0 and c1) cout << "YES\n";
        else if(flag) cout << "YES\n";
        else cout << "NO\n";



    }
    return 0;
}