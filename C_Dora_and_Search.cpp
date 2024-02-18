#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;

int i = 0; 
int j = n-1;

int mi = 1;
int ma = n;

while(j - i > 2){

    if(a[i] == mi)
        mi++,i++;
    
    else if(a[i] == ma)
        ma--,i++;

    else if(a[j] == mi)
        mi++,j--;

    else if(a[j] == ma)
        ma--,j--;
    else{
        cout << i+1 << ' ' << j+1;
        return;
    }
}

cout << -1;


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