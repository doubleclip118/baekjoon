#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;



bool compare(const pair<int, string> &a, const pair<int, string> &b)
{

    return a.first < b.first; // first 값이 같지 않다면 더 큰 값이 뒤로 가게 해라!
}

int main(){
    vector<pair<int,string>> list;
    int number,temp;
    string name;
    cin>>number;
    for(int i=0;i<number;i++){
        cin>>temp>>name;
        list.push_back(make_pair(temp,name));
    }
    stable_sort(list.begin(),list.end(),compare);
    for(auto k:list){
        cout<<k.first<<" "<<k.second<<'\n';
    }

}