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
    lli n,q,l,r,k,sum=0;
    cin >> n >> q;
    vector<lli> a(n);
    f(i,0,n) {
        cin >> a[i];
        sum+=a[i];
    }
    vector<lli> pref(n+1,0);
    f(i,0,n) {
        pref[i+1]=pref[i]+a[i];
    }
    f(i,0,q) {
        cin >> l >> r >> k;
        lli sum1=pref[r]-pref[l-1];
        sum=pref[n]-sum1+(r-l+1)*k;
        (sum&1) ? cout << "YES" << endl: cout << "NO" << endl;
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