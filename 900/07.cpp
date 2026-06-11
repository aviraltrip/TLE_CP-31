#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        vector<long long> meow(n);
        for (int i=0;i<n;i++) cin >> meow[i];
        sort(meow.begin(),meow.end());
        int maxm=1,c=1;
        for (int i=1;i<n;i++) {
            if (meow[i]-meow[i-1]<=k) c++;
            else c=1;
            maxm=max(maxm,c);
        }
        cout << n-maxm << endl;
    }
}