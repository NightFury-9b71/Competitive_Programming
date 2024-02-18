#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

string x; cin >> x;

for(int i=0; i<(int)x.size(); i++){
    short l = x[i] - '0';
    if( 9 - l < l)
        if(9-l == 0 and i==0)
            continue;
        else
        x[i] = (9-l) + '0';
}

cout << x;

}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

// int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    cout << '\n';
}

return 0;
}