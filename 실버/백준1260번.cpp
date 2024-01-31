#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> vec[1002];
vector<bool> result_bfs(1002,false);
vector<bool> result_dfs(1002,false);
int n,m,v,tmp1,tmp2;

void dfs(int num){
    cout<<num<<" ";
    result_dfs[num]=true;
    for(auto k:vec[num]){
        if(!result_dfs[k]){
            dfs(k);
        }
    }
}
void bfs(int nu){
    queue <int> q;
    q.push(nu);
    result_bfs[nu]=true;
    while(!q.empty()){
        int cur=q.front();
        cout<<cur<<" ";
        q.pop();
        for(auto l:vec[cur]){
            if(!result_bfs[l]){
                result_bfs[l]=true;
                q.push(l);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,v,tmp1,tmp2;
    cin>>n>>m>>v;
    for(int i=1;i<=m;i++){
        cin>>tmp1>>tmp2;
        vec[tmp1].push_back(tmp2);
        vec[tmp2].push_back(tmp1);
    }
    for(int i=1;i<=n;i++){
        sort(vec[i].begin(),vec[i].end());
    }
    dfs(v);
    cout<<"\n";
    bfs(v);

}