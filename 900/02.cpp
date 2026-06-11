
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
    lli a,b;
    cin >> a;
    cin >> b;
    lli c=a+b;
    string sa=to_string(a);
    string sb=to_string(b);
    string sc=to_string(c);
    string na="",nb="",nc="";
    for (char d:sa) {
        if (d!='0') na+=d;
    }
    for (char d:sb) {
        if (d!='0') nb+=d;
    }
    for (char d:sc) {
        if (d!='0') nc+=d;
    }
    lli x=stoi(na);
    lli y=stoi(nb);
    lli z=stoi(nc);
    (x+y==z)?cout << "YES":cout << "NO";
}
 
int main() {
    NFS;
    lli testCases = 1;
    // cin >> testCases;
    while (testCases--) {
        solutionForProblem();
    }
    return 0;
}
