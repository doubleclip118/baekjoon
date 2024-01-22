#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    
    while(true){
        string str;
        char input; 
        getline(cin, str);
		if(str=="."){
            break;
        }
        stack<char> stack;
        bool flag=true;
        for(int i=0;i<str.length();i++){
            input=str[i];
            if(input=='[' || input=='('){
                stack.push(input);
            }
            else if(input==']'){
                if(!stack.empty()&& stack.top()=='['){
                    stack.pop();
                }
                else{
                    flag=false;
                    break;
                }
            }
            else if(input==')'){
                if(!stack.empty()&& stack.top()=='('){
                    stack.pop();
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(stack.empty()&&flag==true){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
		


    }
}