#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop,sum=0;
    stack<int> stack;
    cin>>loop;
    for(int i=0;i<loop;i++){
        int temp;
        cin>>temp;
        if(temp!=0){
            stack.push(temp);
        }
        else if(temp==0&&!stack.empty()){
            stack.pop();
        }
    }
    int a=stack.size();
    for(int i=0;i<a;i++){
        sum+=stack.top();
        
        stack.pop();
        
    }
    cout<<sum;
}