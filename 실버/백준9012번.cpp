#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);cout.tie(NULL);

    int number;
    string list;
    cin>>number;
    
    for(int i=0;i<number;i++){
        stack<char> stack; // 스택 초기화
        bool flag=true;
        cin>>list;
        for(int i=0;i<list.length();i++){
            if(list[i]=='('){
                stack.push(list[i]);
            }
            else if(!stack.empty()&&stack.top()=='('&&list[i]==')'){
                stack.pop();
            }
            else{
                cout<<"NO"<<"\n";
                flag=false;
                break;
            }

        }
        if(flag==true){
            if(stack.empty()){
            cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }

    return 0;
}