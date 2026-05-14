#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a;
    int absmin = 1e6;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(abs(a)<absmin)
        {
            absmin=abs(a);
        }
    }
    cout << absmin <<endl;

    return 0;
}