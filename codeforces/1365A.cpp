// 07/06/2020  @ 20:18:56
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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int rr[n] = {0};
        int cc[m] = {0};
        fr(i, n) {
            fr(j, m){
                 cin >> a[i][j];
                 if(a[i][j]) {

                     rr[i] = 1;
                     cc[j] = 1;
                 }
        
            }
        }
        int ans = 0;
        fr(i, n) {
            if(rr[i] == 1) continue;
            fr(j, m) {
                if(cc[j] == 0) {
                    ans++;
                    rr[i] = 1;
                    cc[j] = 1;

                    break;
                }
                
            }
        }
        if(ans%2) cout << "Ashish\n";
        else cout << "Vivek\n";
        

    }
    return 0;
}