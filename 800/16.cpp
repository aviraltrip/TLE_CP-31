// © Aviral Tripathi.
// For all your days prepare, And meet them ever alike:
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
    lli n,c=inf;
    cin >> n;
    vector<lli> a(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n-1) {
        if (a[i]>a[i+1]) {
            cout << 0 << endl;
            return;
        }
    }
    f(i,0,n-1) {
        lli req=((a[i+1]-a[i])/2)+1;
        c=min(c,req);
    }
    cout << c << endl;
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
