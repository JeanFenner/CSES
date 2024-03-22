#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    
    cin >> n;

    list<long> ns;

    for(int i=0; i<n-1; i++){
        cin >> m;
        ns.push_back(m);
    }

    ns.sort();

    auto nl = ns.begin();

    for(long long i=1; i<=n; i++){
        if(i != *nl){
            cout << i;
            break;
        }
        nl++;
    }

    cout << endl;

    return 0;
}