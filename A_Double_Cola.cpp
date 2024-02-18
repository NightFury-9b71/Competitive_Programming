#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int x = 0,j=0;
string name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

while(1){
int  z=(1<<j++);

for(int i=1; i<=5;){
    x+=z,i++;
    if(x >= n){
        cout << name[i-2];
        return;
    }
}

}


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