#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n,m,a,b; cin >> n >> m >> a >> b;
int cost = n*a;

if( b < m*a){

    if(n/m){
        cost=(n/m * b);
        if(n%m)
            cost+=min(n%m * a,b);
    }
    else
        cost=min(cost,b); 
}

cout << cost; 


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