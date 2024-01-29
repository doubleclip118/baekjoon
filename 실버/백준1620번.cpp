#include <iostream>
#include <map>
#include <string>
using namespace std;

string ans[100001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,int> list;
    int a,b;
    string name;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>name;
        list.insert(make_pair(name,i));
        ans[i+1]=name;
    }
    for(int i=0;i<b;i++){
        cin>>name;
        if(isdigit(name[0])){
            cout<<ans[stoi(name)]<<"\n";
        }
        else{
            cout<<list[name]+1<<"\n";
        }
    }
}