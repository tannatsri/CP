// 06/09/2020  @ 20:05:03
// *****************************************************************
// *****************************************************************
#include <bits/stdc++.h>
// *****************************************************************
// *****************************************************************
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define fr(i,n) for(llu i=0;i<n;i++)
#define fl(j,a,b) for(llu j=a;j<=b;j++)
#define Pi 3.1415926535897932384626
#define mod 1e9+7
#define MID(a,b) ((a + b) >> 1)
#define MAX(a,b) ((a) > (b) ? (a): (b))
#define MIN(a,b) ((a) < (b) ? (a) :(b))
#define pb push_back
#define mp make_pair
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define printer(a, n) fr(i,n) cout << a[i] << " ";
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
bool rev(ll a, ll b) {
    return a > b;
}
// *****************************************************************
void solution() {
    int n;
    cin >> n;
    int a[n];
    fr(i, n) cin >> a[i];
    for(int i = n - 1; i >= 0;i--) cout << a[i] << " ";

}
// *****************************************************************
int main() {
    IOS;
    #ifndef ONLINE_JUDGE
        freopen("C:/Users/Mr.Tanishq/Desktop/noc/input.txt", "r", stdin);
        freopen("C:/Users/Mr.Tanishq/Desktop/noc/output.txt", "w", stdout);
        freopen("C:/Users/Mr.Tanishq/Desktop/noc/error.txt", "w", stderr);
    #endif
    // *****************************************************************
    // *****************************************************************
    int t = 1;
    cin >> t;
    while(t--) {

       solution();
       cout << "\n";
    }
    return 0;
}