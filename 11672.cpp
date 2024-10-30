#include <iostream>
#include <algorithm>

using namespace std;

unsigned int arr[100000];
unsigned int arr_size;
unsigned int nof_queries;
char type;
unsigned int x, y;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>arr_size;
    cin>>nof_queries;

    for(int i=0 ; i<arr_size ; i++)
        cin>>arr[i];
    for (int i=0 ; i<nof_queries ; i++){
        cin>>type>>x>>y;
        if(type == 'C'){
            auto[minVal, maxVal] = minmax_element(arr+x-1, arr+y);
            cout<<*minVal<<' '<<*maxVal<<endl;
        }
        else if(type == 'A')
            arr[x-1] = y;
    }
}