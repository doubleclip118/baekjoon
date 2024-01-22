#include <iostream>
using namespace std;
int list[50][50]={0,};

오류발생위해
int main(){
    int loop;
    cin>>loop;
    for(int i=0;i<loop;i++){
        int width, height,num,temp1,temp2;
        cin>>width>>height>>num;
        for(int j=0;j<num;j++){
            cin>>temp1>>temp2;
            list[temp1][temp2]=1;
        }
        find_warm(width,height,num,0,0,0);

    }
}