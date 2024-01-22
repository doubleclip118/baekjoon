#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop,temp;
    int list[10001]={0,};
    cin>>loop;
    for(int i=0;i<loop;i++){
        cin>>temp;
        list[temp]++;
    }
    for(int i=1;i<10001;i++){
        for(int j=0;j<list[i];j++){
            cout<<i<<"\n";
        }
    }
}
