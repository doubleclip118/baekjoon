#include <iostream>
#include <queue>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    queue<int> queue;
    for(int i=1;i<=num1;i++){
        queue.push(i);
    }
    cout<<'<';
    for(int i=1;i<=num1;i++){
        for(int j=1;j<=num2;j++){
            if(j!=num2){
                queue.push(queue.front());
                queue.pop();
            }
            else if(j==num2&&i==num1){
                cout<<queue.front();
                queue.pop();
            }
            else{
                cout<<queue.front()<<", ";
                queue.pop();
            }
        }
    }
    cout<<">";
}