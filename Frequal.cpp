#include<bits/stdc++.h>
using namespace std;

vector<int> prime;
vector<bool> vis(1e6+10);

void sieve(){
prime.push_back(2);

for(int i=3; i<1e6+10; i+=2){
    if(!vis[i]){
        prime.push_back(i);
        for(int j=i; j<1e6+10; j+=i)
            vis[j] = true;
    }
}

}

void ShobEMaya(){

int n; cin >> n;

if(n&1) cout << 1 << ' ';

for(int i=0; i<n/2; i++)
    cout << prime[i] << ' ' << prime[i] << ' ';

}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);
sieve();
int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    cout << '\n';
}

return 0;
}