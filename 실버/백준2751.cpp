#include <iostream>
#include <algorithm>
using namespace std;
int list[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int number,temp;
    cin>>number;
    for(int i=0; i<number; i++){
        cin>>temp;
        list[i]=temp;
    }
    sort(list,list+number);

    for(int i=0;i<number;i++){
        cout<<list[i]<<"\n";
    }
}