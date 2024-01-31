#include <iostream>
using namespace std;
int paper[128][128];
int white=0;
int blue=0;
int main(){
    int wh,temp;
    cin>>wh;
    for(int i=0;i<wh;i++){
        for(int j=0;j<wh;j++){
            cin>>temp;
            paper[i][j]=temp;
        }
    }
}