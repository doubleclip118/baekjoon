#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool compare(pair<int,int>a ,pair<int,int>b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}



int main(){
    int num,temp1,temp2;
    cin>>num;
    vector<pair<int,int>> coordinate; 
    for(int i=0;i<num;i++){
        cin>>temp1>>temp2;
        coordinate.push_back(pair<int,int>(temp1,temp2));
    }
    sort(coordinate.begin(), coordinate.end(),compare);

    for(auto k:coordinate){
        cout<<k.first<<" "<<k.second<<"\n";
    }


}