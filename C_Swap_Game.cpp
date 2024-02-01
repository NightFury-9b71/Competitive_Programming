#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;

int x = *min_element(a,a+n);

if(x == a[0])
    cout << "Bob";
else
    cout << "Alice";

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
