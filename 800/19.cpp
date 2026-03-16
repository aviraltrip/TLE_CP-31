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
    lli n,sum=0,c=0,ans=0;
    cin >> n;
    vector<lli> a(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) {
        sum+=a[i];
        if (a[i]==-1) c++;
    }
    while(sum<0 || c%2!=0) {
        sum+=2;
        c--;
        ans++;
    }
    cout << ans << endl;
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
