#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
map<int,int> mp;
for(int i=0,x; i<n and cin >> x; i++) mp[x]++;

int f = -1,cnt = 0,ans = 0;

for(auto &[x,y]:mp){

    if(x-f == 1){
        if(y > cnt)
            ans+=(y-cnt),cnt = y;
    }
    else 
        cnt = 0,ans+=y,f=x;


}

cout << ans ;

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