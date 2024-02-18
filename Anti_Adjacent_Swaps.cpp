#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;

if(n<4){
    if(is_sorted(a,a+n))
        cout << "YES";
    else if(n==3){
        swap(a[0],a[2]);
        if(is_sorted(a,a+n))
            cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
}

else cout << "YES";

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