#include<bits/stdc++.h>
using namespace std;

int factor(int x){
    int cnt = 0;

    while(x%2==0){
        cnt++;
        x/=2;
    }

    return cnt;
}

void ShobEMaya(){

int n; cin >> n;

int cnt = 0;

for(int i=1; i<=n; i++){
    int x; cin >> x;
    cnt+=factor(x);
}

int ans = 0;
vector<int> v;

for(int i=2; i<=n; i++)
    v.push_back(factor(i));

sort(v.begin(),v.end(),greater<int>());


for(auto &i:v){
    if(cnt >= n)
        break;
    else
        cnt+=i,ans++;
}

if(cnt < n) ans = -1;

cout << ans;





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
