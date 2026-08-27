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
    if(n==2){
        cout<<"Yes"<<endl;
        return;
    }
    map<lli,lli> m;
    f(i,0,n) m[a[i]]++;
    bool flag=true;
    if(m.size()>2) flag=false;
    else if(m.size()==2) {
        vector<lli> fre;
        for(auto x:m) fre.push_back(x.second);
        if(n%2==0) {
            if(fre[0]!=n/2 || fre[1]!=n/2)
                flag=false;
        }
        else {
            if(abs(fre[0]-fre[1])>1)
                flag=false;
        }
    }
    (flag==true) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
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
