#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int loop,temp;
    string cmd;
    deque<int> deque;

    cin>>loop;
    for(int i=0;i<loop;i++){
        cin>>cmd;
        if(cmd=="push_front"){
            cin>>temp;
            deque.push_front(temp);
        }
        else if(cmd=="push_back"){
            cin>>temp;
            deque.push_back(temp);
        }
        else if(cmd=="pop_front"){
            if(deque.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<deque.front()<<"\n";
                deque.pop_front();
            }
        }
        else if(cmd=="pop_back"){
            if(deque.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<deque.back()<<"\n";
                deque.pop_back();
            }
        }
        else if(cmd=="size"){
            cout<<deque.size()<<"\n";
        }
        else if(cmd=="empty"){
            if(deque.empty()){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
        else if(cmd=="front"){
            if(deque.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<deque.front()<<"\n";
            }
        }
        else if(cmd=="back"){
            if(deque.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<deque.back()<<"\n";
            }
        }

    }


    return 0;
}