#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<string,string>> list;
    string aa,bb;
    int num,fnum;
    cin>>num>>fnum;
    for(int i=0;i<num;i++){
        cin>>aa>>bb;
        list.push_back(make_pair(aa,bb));;
    }
    for(int i=0;i<fnum;i++){
        cin>>aa;
        for(auto k:list){
            if(k.first==aa){
                cout<<k.second<<"\n";
            }
        }
    }
}