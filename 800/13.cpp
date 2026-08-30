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
    lli n;
    cin >> n;
    vector<lli> a(n);
    f(i,0,n) cin >> a[i];
    lli minm = *min_element(a.begin(),a.end());
    vector<lli> b,c;
    f(i,0,n) {
        if (a[i] == minm)  b.push_back(a[i]);
        else  c.push_back(a[i]);
    }
    if (c.size()==0) {
        cout << -1 << endl;
        return;
    }
    cout << b.size() << " " << c.size() << endl;
    f(i,0,b.size()) cout << b[i] << " ";
    cout << endl;
    f(i,0,c.size()) cout << c[i] << " ";
    cout << endl;
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
