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
    vector<vector<char>> a(10,vector<char>(10));
    lli c=0;
    f(i,0,10) {
        f(j,0,10) {
            cin >> a[i][j];
        }
    }
    f(i,0,10) {
        f(j,0,10) {
            if (a[i][j]=='X') {
                if (i==0 || i==9 || j==0 || j==9) c+=1;
                else if (i==1 || i==8 || j==1 || j==8) c+=2;
                else if (i==2 || i==7 || j==2 || j==7) c+=3;
                else if (i==3 || i==6 || j==3 || j==6) c+=4;
                else c+=5;
            }
        }
    }
    cout << c << endl;
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
