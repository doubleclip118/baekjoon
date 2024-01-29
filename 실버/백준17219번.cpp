#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,string >list;
    string aa,bb;
    int num,fnum;
    cin>>num>>fnum;
    for(int i=0;i<num;i++){
        cin>>aa>>bb;
        list.insert(make_pair(aa,bb));;
    }
    for(int i=0;i<fnum;i++){
        cin>>aa;
        cout<<list[aa]<<"\n";
    }
}