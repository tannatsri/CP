// 04/06/2020  @ 20:02:19
// *****************************************************************
// *****************************************************************
#include <bits/stdc++.h>
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
    freopen("C:/Users/Mr.Tanishq/Desktop/noc/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("C:/Users/Mr.Tanishq/Desktop/noc/output.txt", "w", stdout);
#endif
    // *****************************************************************
    // *****************************************************************
    int t = 1;
    cin >> t;
    while (t--)
    {
        llu a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        llu z = MAX(a,b);
        b = a+b - z;
        a = z;
        if(a %b == 0) {
            int ans = 0;
            while(a % 2 == 0)
            {
                if (a<=b) break;
                ans++;
                a /= 2;
            }
            //cout<<count<<" ";
            if (a == b)
            {
                llu t = ans/3;
                ans%=3;
                t += ans/2;
                ans%=2;
                cout << t + ans << "\n";
            }
            else cout << -1 << "\n";
        }
        
        else cout << -1 << "\n";
        
    }
    return 0;
}