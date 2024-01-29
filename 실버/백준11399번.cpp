#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int num,temp,sum=0;
    vector<int> list;

    cin>>num;
    for(int i=0; i<num; i++){
        cin>>temp;
        list.push_back(temp);
    }
    sort(list.begin(),list.end());

    for(int i=num;i>=1;i--){
        sum+=list[num-i]*i;
    }
    cout<<sum;
}