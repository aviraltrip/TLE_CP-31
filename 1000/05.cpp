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
    lli n,k;
    cin >> n >> k;
    vector<pair<lli,lli>> v;
    f(i,0,n) {
        lli a;
        cin >> a;
        lli rem=a%k;
        if (rem==0) rem=k;
        v.push_back({rem,i+1});
    }
    sort(v.begin(),v.end(),[](auto &c,auto &b) {
        if (c.first==b.first) return c.second<b.second;
        return c.first > b.first;
    });
    for (auto &p:v) cout << p.second << " ";
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