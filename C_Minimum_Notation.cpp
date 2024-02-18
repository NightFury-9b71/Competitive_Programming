#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

string s; cin >> s;
char z = s[s.size()-1];

for(int i=s.size()-1; i>=0; i--){
    if(s[i] <= z)
        z = s[i];
    else 
        s[i] = (min(s[i] - '0' + 1 , 9) + '0');
}

sort(s.begin(),s.end());

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