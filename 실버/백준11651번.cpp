#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> &a,pair<int,int> &b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop,temp1,temp2;
    vector<pair<int,int>> list;
    cin>>loop;
    for(int i=0;i<loop;i++){
        cin>>temp1>>temp2;
        list.push_back(make_pair(temp1,temp2));
    }
    sort(list.begin(),list.end(),compare);
    for(auto k:list){
        cout<<k.first<<" "<<k.second<<"\n";
    }
}