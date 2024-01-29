#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,int> list;
    vector<string> ans;
    int listen,see,cnt=0;
    string temp;
    cin>>listen>>see;
    for(int i=0;i<listen;i++){
        cin>>temp;
        list.insert(make_pair(temp,1));
    }
    for(int i=0;i<see;i++){
        cin>>temp;
        if(list[temp]){
            cnt++;
            ans.push_back(temp);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<cnt<<"\n";
    for(auto k:ans){
        cout<<k<<"\n";
    }
}