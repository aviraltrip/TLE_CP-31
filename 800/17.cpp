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
    lli n,k,x;
    cin >> n >> k >> x;
    if (x!=1) {
        cout << "YES" << endl;
        cout << n << endl;
        f(i,0,n) cout << 1 << " ";
        cout << endl;
        return;
    }
    if (k==1 || (k==2 && n%2!=0)) {
        cout << "NO" << endl;
        return;
    }
    if (n%2==0) {
        cout << "YES" << endl;
        cout << n/2 << endl;
        f(i,0,n/2) cout << 2 << " ";
        cout << endl;
    } else {
        cout << "YES" << endl;
        cout << (n-3)/2+1 << endl;
        cout << 3 << " ";
        f(i,0,(n-3)/2) cout << 2 << " ";
        cout << endl;
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
