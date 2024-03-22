#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s;
    char a;
    long long x=0, y=0;

    cin >> s;

    a = *(s.begin());

    for(auto i = s.begin(); i != s.end(); i++){
        if(*i==a)
            x++;
        else{
            a = *i;
            x = 1;
        }

        if(x > y)
            y = x;
    }

    cout << y;

    cout << endl;

    return 0;
}