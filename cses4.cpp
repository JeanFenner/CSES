#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n, x, y, z=0;
    vector<long long> v;

    cin >> n;
    v.resize(n);
    
    for (int i=0; i<n; i++)
        cin >> v[i];

    y = *v.begin();
    for(auto i=v.begin()+1; i<v.end(); i++) {
        x = (*i)-y;
        if(x<0) {
            z -= x;
        } else
            y = *i;
    }

    cout << z;

    cout << endl;

    return 0;
}