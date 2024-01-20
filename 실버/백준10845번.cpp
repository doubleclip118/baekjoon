#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int loop,temp;
    string cmd;
    queue<int> queue;
    cin>>loop;
    for(int i=0;i<loop;i++){
        cin>>cmd;
        if(cmd=="push"){
            cin>>temp;
            queue.push(temp);
        }
        else if(cmd=="pop"){
            if(!queue.empty()){
                cout<<queue.front()<<"\n";
                queue.pop(); 
            }
            else{
                cout<<"-1"<<"\n";
            }
        }
        else if(cmd=="size"){
            cout<<queue.size()<<"\n";
            
        }
        else if(cmd=="empty"){
            if(queue.empty()){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
        else if(cmd=="front"){
            if(queue.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<queue.front()<<"\n";
            }
        }
        else if(cmd=="back"){
            if(queue.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<queue.back()<<"\n";
            }
        }
    }





    return 0;
}