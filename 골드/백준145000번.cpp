#include <iostream>
#include <algorithm>
int list[501][501];
using namespace std;
int a,b,temp;


int serach(){
    int q=0,q1=0,w=-1,w1=0,w2=0,e1=0,e2=0,e3=0,e4=0,e5=0,e6=0,e=-1,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t=-1;
    for(int x=0; x<a;x++){
        for(int y=0; y<b;y++){
            if(x+1<a&&y+1<b){
                q1+=list[x][y];
                q1+=list[x][y+1];
                q1+=list[x+1][y];
                q1+=list[x+1][y+1];

                q=max(q,q1);
                q1=0;
                
            }
            if(x+3<a){
                w1+=list[x][y];
                w1+=list[x+1][y];
                w1+=list[x+2][y];
                w1+=list[x+3][y];
            }
            if(y+3<b){
                w2+=list[x][y];
                w2+=list[x][y+1];
                w2+=list[x][y+2];
                w2+=list[x][y+3];
            }
            w=max({w1,w2,w});
            w1=0;
            w2=0;
            if(x+2<a&&y+1<b){
                e1=list[x][y];
                e2=list[x+1][y];
                e3=list[x+2][y];
                e4=list[x][y+1];
                e5=list[x+1][y+1];
                e6=list[x+2][y+1];
                
                e=max({e,e1+e2+e3+e4,
                e1+e4+e5+e6,
                e3+e4+e5+e6,
                e1+e2+e3+e6,
                e2+e3+e4+e5,
                e1+e2+e5+e6,
                e1+e2+e3+e5,
                e2+e4+e5+e6});
                e1=0;e2=0;e3=0;e4=0;e5=0;e6=0;
            }
            if(x+1<a&&y+2<b){
                t1=list[x][y];
                t2=list[x][y+1];
                t3=list[x][y+2];
                t4=list[x+1][y];
                t5=list[x+1][y+1];
                t6=list[x+1][y+2];
                
                t=max({t,t1+t2+t3+t4,
                t1+t2+t3+t6,
                t3+t4+t5+t6,
                t1+t4+t5+t6,
                t2+t3+t4+t5,
                t1+t2+t5+t6,
                t1+t2+t3+t5,
                t2+t4+t5+t6});

                t1=0;t2=0;t3=0;t4=0;t5=0;t6=0;

            }
        }
    }
    return max({q,w,e,t});
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>temp;
            list[i][j]=temp;
        }
    }
    cout<<serach();
}
