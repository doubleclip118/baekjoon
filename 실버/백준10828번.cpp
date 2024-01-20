#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL); cout.tie(NULL);

    int loop,temp;
    string cmd;
    stack<int> operation;
    cin>>loop;
    for(int i=0;i<loop;i++){
        cin>>cmd;
        if (cmd=="push"){
            cin>>temp;
            operation.push(temp);
        }
        else if (cmd=="pop"){
            if(!operation.empty()){
                cout<<operation.top()<<"\n";
                operation.pop();
            }
            else{
                cout<<"-1"<<"\n";
            }
        }
        else if(cmd=="size"){
            cout<<operation.size()<<"\n";
        }
        else if(cmd=="empty"){
            if(operation.empty()){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
        else if(cmd=="top"){
            if(!operation.empty()){
                cout<<operation.top()<<'\n';
            }
            else{
                cout<<"-1"<<"\n";
            }
        }

    }

    return 0;

}