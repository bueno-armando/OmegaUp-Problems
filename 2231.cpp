#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    unsigned short n, m;
    cin>>n>>m;
    unsigned short res = n*m;

    for(unsigned short i=0 ; i<5 ; i++){
        cin>>n;
        cout<<n-res<<' ';
    }
    cout<<endl;
}