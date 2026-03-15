
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
    string n;
    cin >> n;
    lli ans = inf;
    fr(i,n.size()-1,0) {
        if (n[i]=='5') {
            fr(j,i-1,0) {
                if (n[j]=='2'||n[j]=='7') {
                    lli rem=(n.size()-1-i)+(i-j-1);
                    ans=min(ans,rem);
                    break;
                }
            }
        }
        if (n[i]=='0') {
            fr(j,i-1,0) {
                if (n[j]=='5'||n[j]=='0') {
                    lli rem=(n.size()-1-i)+(i-j-1);
                    ans=min(ans,rem);
                    break;
                }
            }
        }
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
