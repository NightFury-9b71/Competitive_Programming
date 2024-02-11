#include<bits/stdc++.h>
using namespace std;

double cal(double x1, double x2, double y){
    return sqrt(((x1-x2)*(x1-x2)) + y*y);
}

void ShobEMaya(){

int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;

double x3 = (x1+x2)/2.0;

double dis1 = cal(x1,x3,y1);
double dis2 = cal(x2,x3,y2);

printf("%lf\n",dis1+dis2);



}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    // cout << '\n';
}

return 0;
}