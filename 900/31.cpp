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
    lli n,c2=0,c3=0;
    cin >> n;
    if (n==1) {
        cout << 0 << endl;
        return;
    }
    while (n%2==0) {
        n/=2;
        c2++;
    }
    while (n%3==0) {
        n/=3;
        c3++;
    }
    if (n!=1 || c2>c3) {
        cout << -1 << endl;
        return;
    }
    cout << (c3+(c3-c2)) << endl;
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