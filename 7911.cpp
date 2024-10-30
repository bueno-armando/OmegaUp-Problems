#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a == d && b == c){
        cout<<1;
    }
    else{
        cout<<0;
    }
}