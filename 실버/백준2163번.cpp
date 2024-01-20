
#include <iostream>
#include <queue>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    queue<int> queue;
    int card_number,temp;
    cin>>card_number;
    for(int i=1;i<=card_number;i++){
        queue.push(i);
    }
    
    while(queue.size()>1){  
        queue.pop();
        temp=queue.front();

        queue.pop();
        queue.push(temp);
    }
    cout<<queue.front();

    return 0;
    
}