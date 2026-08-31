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
    lli x,n;
    cin >> x >> n;
    if (x%2==0) {
        if (n%4==0) cout << x << endl;
        else if (n%4==1) cout << x-n << endl;
        else if (n%4==2) cout << x+1 << endl;
        else cout << x+n+1 << endl;
    }
    else {
        if (n%4==0) cout << x << endl;
        else if (n%4==1) cout << x+n << endl;
        else if (n%4==2) cout << x-1 << endl;
        else cout << x-n-1 << endl;
    }
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