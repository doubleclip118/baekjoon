#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    vector<int> black_jack, correct;
    int number,sum,min=100000000,good,num;
    cin>>number>>good;
    for(int i=0; i<number; i++){
        int temp;
        cin>>temp;
        black_jack.push_back(temp);
    }
    for (int i=0;i<number;i++){
        for(int j=0;j<number;j++){
            for(int k=0;k<number;k++){
                if(black_jack[i]!=black_jack[j]&&black_jack[j]!=black_jack[k]&&black_jack[i]!=black_jack[k]){
                    sum=black_jack[i]+black_jack[j]+black_jack[k];
                    int cur_min=abs(good-sum);
                    if(cur_min<min && sum<=good){
                        min=cur_min;
                        num=sum;
                    }
                }
            }
        }
    }
    cout<<num;
}