#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n; 
string s1,s2; cin >> s1 >> s2;

for(int i=0; i<n; i++){
    int cnt=0;
    char x = s1[i];
    while(x != s2[i]){
        if(x == 'X') x = 'A';
        else if(x == 'Y') x = 'B';
        else if(x == 'Z') x = 'C';
        else x+=3;
        cnt++;
    }

    cout << cnt << ' ';
}


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