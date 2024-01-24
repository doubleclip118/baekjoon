#include <iostream>
#include <string>
using namespace std;
int main(){
    string str,str1;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(65<=str[i]&&str[i]<=90){
            if(atoi(str[i])+13>90){
                str1[i]+=char(atoi(str[i])-22);
            }
            else{
                str1[i]+=char(atoi(str[i])+13);
            }

        }
        else if(97<=str[i]&&str[i]<=122){

        }
        else{
            str1+=str[i];
        }
    }
}