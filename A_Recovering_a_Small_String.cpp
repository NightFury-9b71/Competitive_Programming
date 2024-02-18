#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
string s;

if(n <= 27){
    n-=2;
    s+="aa";
    s+=char(96 + n);
}

else if(n <= 52){
    n-=27;
    s+='a';
    s+=char(96 + n);
    s+='z';
}

else{
    n-=52;
    s+=char(96 + n);
    s+="zz";
}


cout << s;

}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    cout << '\n';
}

return 0;
}