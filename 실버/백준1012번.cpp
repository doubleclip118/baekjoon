#include <iostream>
#include <vector>
using namespace std;

int farm[51][51];
int xpos[4]={0,0,-1,1};
int ypos[4]={1,-1,0,0};
int width,height;
void dfs(int n, int m){
    farm[n][m]=0;
    for(int i=0;i<4;i++){
        int xx=n+xpos[i];
        int yy=m+ypos[i];
        if (xx < 0 || yy < 0 || xx >= width || yy >= height) continue;
        if(farm[xx][yy]==1){
            dfs(xx, yy);
        }
    }
}

int main(){
    int num,cnt=0;
    cin>>num;
    for(int i=0;i<num;i++){
        int number;
        cin>>width>>height>>number;
        for(int j=0;j<number;j++){
            int tmp1,tmp2;
            cin>>tmp1>>tmp2;
            farm[tmp1][tmp2]=1;
        }
        for(int i=0;i<width;i++){
            for(int j=0;j<height;j++){
                if(farm[i][j]==1){
                    dfs(i,j);
                    cnt++;
                }
            }
        }   
        cout<<cnt<<"\n";
        cnt=0;
    }
}