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
    lli a,b,c;
    cin >> a >> b >> c;
    bool prajwal=false;
    if (2*b>c && (2*b-c)%a==0) prajwal=true;
    if ((a+c)%(2*b)==0) prajwal=true;
    if (2*b>a && (2*b-a)%c==0) prajwal=true;
    cout << (prajwal?"YES":"NO") << endl;
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