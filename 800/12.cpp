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
    vector<lli> b(n); 
    f(i,0,n) cin >> b[i]; 
    vector<lli> a; 
    a.push_back(b[0]); 
    f(i,1,n) { 
        if (b[i-1]<=b[i]) a.push_back(b[i]);
        else { 
            a.push_back(1); 
            a.push_back(b[i]); 
        } 
    } 
    cout << a.size() << endl; 
    f(i,0,a.size()) cout << a[i] << " ";
    cout << endl; }

int main() {
    NFS;
    lli testCases = 1;
    cin >> testCases;
    while (testCases--) {
        solutionForProblem();
    }
    return 0;
}
