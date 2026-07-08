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
    cin >> s;
    lli zero=0,one=0;
    f(i,0,s.size()) {
        if(s[i]=='0') zero++;
        else one++;
    }
    f(i,0,s.size()) {
        if(s[i]=='0') {
            if (one) one--;
            else {
                cout << s.size()-i << endl;
                return;
            }
        }
        else {
            if (zero) zero--;
            else {
                cout << s.size()-i << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
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