#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num,temp,bit=0;
    string cmd;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>cmd;
        if(cmd=="add"){
            cin>>temp;
            bit |= 1<<temp;
        }
        else if(cmd=="remove"){
            cin>>temp;
            bit &= ~(1<<temp);
        }
        else if(cmd=="check"){
            cin>>temp;
            if(bit & (1<<temp)){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
        else if(cmd=="toggle"){
            cin>>temp;
            if(bit & (1<<temp)){
                bit &= ~(1<<temp);
            }
            else{
                bit |= 1<<temp;
            }
        }
        else if(cmd=="all"){
            bit=(1<<21)-1;
        }
        else if(cmd=="empty"){
            bit=0;
        }
    }
}