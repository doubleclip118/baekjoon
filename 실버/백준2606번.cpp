#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> virus[102];
bool check[101];
using namespace std;
int cnt=0;


void dfs(int x){
    check[x]=true;
    for(int i=0;i<virus[x].size();i++){
        int y=virus[x][i];
        if(!check[y]){
            dfs(y);
            cnt++;
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m,tmp,tmp2;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>tmp>>tmp2;
        virus[tmp].push_back(tmp2);
        virus[tmp2].push_back(tmp);
    }
    dfs(1);
    cout<<cnt;
}