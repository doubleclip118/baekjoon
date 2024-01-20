#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int loop,target_number,num,temp1,counter=0;
    cin>>loop;
    for(int i=0;i<loop;i++){
        queue<pair<int,int>> queue;
        priority_queue<int> pq;
        cin>>num>>target_number;
        for(int j=0;j<num;j++){
            cin>>temp1;
            queue.push({j,temp1});
            pq.push(temp1);
        }
        while(!queue.empty()){
            int loc=queue.front().first;
            int val=queue.front().second;
            queue.pop();
            if(pq.top()==val){
                pq.pop();
                counter++;
                if(target_number==loc){
                    cout<<counter<<"\n";
                    break;
                }
            }
            else{
                queue.push({loc,val});
            }
        }
        counter=0;
    }
    return 0;
}