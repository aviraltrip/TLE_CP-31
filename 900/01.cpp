// © Aviral Tripathi.
// For all your ays prepare, And meet them ever alike:
// When you are the anvil, bear — When you are the hammer, strike.
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define f(i, m, n) for(lli i = m; i < n; i++)
#define fr(i, m, n) for(lli i = m; i >= n; i--)
#define endl '\n'
#define inf LLONG_MAX
#define MOD 1e9+7 
#define NFS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solutionForProblem() {
    lli a,b,kx,ky,qx,qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    vector<pair<lli,lli>> moves={ {a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a} };
    set<pair<lli,lli>> ans;
    for (auto mo:moves) {
        lli x=kx+mo.first;
        lli y=ky+mo.second;
        for (auto mov:moves) {
            if (x+mov.first==qx && y+mov.second==qy) ans.insert({x,y});
        }
    }
    cout << ans.size() << endl;
}

int main() {
    NFS;
    lli testCases = 1;
    cin >> testCases;
    while (testCases--) {
        solutionForProblem();
    }
    return 0;
}