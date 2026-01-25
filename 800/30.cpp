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

bool isRound(lli n) {
    string s=to_string(n);
    int count=0;
    for (char c:s) {
        if (c!='0') count++;
        if (count>1) return false;
    }
    return true;
}
void solutionForProblem() {
    static vector<lli> arr;
    if (arr.empty()) {
        for (lli i=1;i<=999999;i++) {
            if (isRound(i)) {
                arr.push_back(i);
            }
        }
    }
    lli n;
    cin >> n;
    lli ans=upper_bound(arr.begin(),arr.end(),n)-arr.begin();
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