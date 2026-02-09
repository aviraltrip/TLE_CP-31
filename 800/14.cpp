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
    long long a, b, c;
    cin >> a >> b >> c;
    if (c&1) {
        if (a>=b) cout << "First\n";
        else cout << "Second\n";
    } else {
        if (a>b) cout << "First\n";
        else cout << "Second\n";
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