
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
    lli n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<lli> freq(26,0);
    for (char c:s) freq[c-'a']++;
    lli odd=0;
    f(i,0,26) {
        if (freq[i]&1) odd++;
    }
    (odd<=k+1)?cout << "YES\n":cout << "NO\n";
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
