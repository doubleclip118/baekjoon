#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> input;

int serach_binary(int k,int e){
    int start=0;
    int end=e-1;
    int mid;
    
    while(start<=end){
        mid=(start+end)/2;
        if(k==input[mid]){
            cout<<"1"<<"\n";
            return 0;
        }
        else if(k>input[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"0"<<"\n";
    return 0;
}

int main(void){
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int input_number, comp_number,temp;
    cin >> input_number;
    for(int i=0;i<input_number;i++){
        int a;
        cin>>a;
        input.push_back(a);
    }
    cin >> comp_number;
    sort(input.begin(), input.end());
    for(int i=0;i<comp_number;i++){
        cin>>temp;
        serach_binary(temp,input_number);    
    }
    
    cout<<"\n";
    return 0;
    


     
}
