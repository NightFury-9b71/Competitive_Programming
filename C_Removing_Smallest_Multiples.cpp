#include<bits/stdc++.h>
using namespace std;

void ShobEMaya(){

int n; cin >> n;
string t; cin >> t;

t = 'x'+t;

long long ans = 0;

for(long long i=1; i<=n; i++){
    if(t[i] == '0' or t[i] == '2'){
        for(int j=i; j<=n; j+=i){
            if(t[j] == '0'){
                ans+=i;
                t[j] = '2';
            }
            else if(t[j] == '2')
                continue;
            else
                break;
        }
    }
}

cout << ans ;

}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase;
    cin >> tCase;

while (tCase--){
    ShobEMaya();
    cout << '\n';
}

return 0;
}