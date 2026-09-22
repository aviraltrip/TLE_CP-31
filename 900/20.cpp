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
    string s;
    lli c=0,c1=0;
    cin >> s;
    f(i,0,s.size()-1) {
        if (s[i]=='a' && s[i+1]=='b') c++;
        else if (s[i]=='b' && s[i+1]=='a') c1++;
    }
    if (c!=c1) s[s.size()-1]=s[0];
    cout << s << endl;
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