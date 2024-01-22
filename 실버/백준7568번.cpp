#include <iostream>
#include <vector>
using namespace std;
int list[50];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> vector;
    int weight,height,loop,cnt;
    cin>>loop;
    for(int i=0;i<loop;i++){
        cin>>weight>>height;
        vector.push_back(pair<int,int>(weight,height));      
    }
    for(int i=0;i<loop;i++){
        cnt=1;
        for(int j=0;j<loop;j++ ){
            if(vector[i].first<vector[j].first&&vector[i].second<vector[j].second){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }



}