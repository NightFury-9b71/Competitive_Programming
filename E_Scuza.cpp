#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> x, pair<int,int> y){
    return x.second < y.second;
}

void ShobEMaya(){

int n,q; cin >> n >> q;
int s[n],k[q];

for(auto &i:s) cin >> i;
for(auto &i:k) cin >> i;

vector< pair<long long,int> > p; 

for(int i=0; i<q; i++)
    p.push_back({k[i],i});

sort(p.begin(),p.end());

long long ans = 0;
int j = 0;

for(int i=0; i<q; i++){

    for(; j<n; j++){

        if(p[i].first >= s[j])
            ans+=(1LL*s[j]);
        else    
            break;
    }

    p[i].first = ans;
}


sort(p.begin(),p.end(),cmp);


for(auto &[i,j]:p)
    cout << i << ' ';



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
