#include<bits/stdc++.h>
using namespace std;

bool cmp(tuple<int,char,int> x, tuple<int,char,int> y){
    return get<2>(x) < get<2>(y);
}

void ShobEMaya(){

int n; cin >> n;
tuple<int,char,int> p[n];

for(int i=0; i<n; i++){
    int x; cin >> x;
    p[i] = make_tuple(x,'x',i);
}

sort(p,p+n);

int x = -1;
char z='a';

for(int i=0; i<n; i++){

    if( get<0>(p[i]) > x){
        z = 'a';
        x = get<0>(p[i]);
    }

    get<1>(p[i]) = z++;
}

sort(p,p+n,cmp);

for(auto &i:p){
    cout << get<1>(i);
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