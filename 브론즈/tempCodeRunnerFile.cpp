#include <iostream>
#include <string>
using namespace std;
int main(){
    char ap[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','q','v','w','x','y','z'};
    int aap[27]={0,};
    string a;
    cin>>a;
    for(int i=0; i<a.length(); i++){
        for(int j=0; j<26; j++){
            if(a[i]==ap[j]){
                aap[j]++;
            }
        }
    }
    for(int i=0; i<26; i++){
        cout<<aap[i] <<" ";
    }
}