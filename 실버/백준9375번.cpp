#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    int loop,temp;
    string tmp1,tmp2;
    cin>>loop;
    for(int i=0;i<loop;i++){
        int result=1;
        map<string,int> list;

        cin>>temp;
        for(int j=0;j<temp;j++){
            cin>>tmp1>>tmp2;
            if(list.find(tmp2)==list.end()){
                list.insert({tmp2,1});
            }
            else{
                list[tmp2]++;
            }
        }
        for(auto k:list){
            if(k.second!=0){
                result*=(k.second+1);
            }
        }
        cout<<result-1<<'\n';
        result=1;
    }
}