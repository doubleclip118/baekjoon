#include <iostream>
#include <vector>
using namespace std;
int ap[27];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> vec;
    int loop,temp1;
    bool flag=true;
    string temp;
    cin>>loop;
    for(int i=0; i<loop; i++){
        cin>>temp;
        temp1=temp[0]-97;
        ap[temp1]++;
    }
    for(int i=0; i<27;i++){
        if(ap[i]>=5){
            cout<<char(i+97);
            flag=false;
        }
    }
    if(flag==true){
        cout<<"PREDAJA";
    }



}