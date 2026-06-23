#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        vector<int> a(n);
        cin>>a[0];
        int maxe = a[0];
        for(int i = 1 ;i<n;i++){
            cin>>a[i];
            maxe = max(maxe,a[i]-a[i-1]);
        }
        maxe = max(maxe,2*(x-a[n-1]));
        
        cout<<maxe<<endl;
    }
    return 0;
}