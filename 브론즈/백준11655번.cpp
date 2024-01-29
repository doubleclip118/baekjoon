#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str); // 공백을 포함한 한 줄을 입력받음

    for(int i = 0; i < str.size(); i++){
        // 대문자인 경우
        if('A' <= str[i] && str[i] <= 'Z'){
            str[i] = (str[i] - 'A' + 13) % 26 + 'A';
        }
        // 소문자인 경우
        else if('a' <= str[i] && str[i] <= 'z'){
            str[i] = (str[i] - 'a' + 13) % 26 + 'a';
        }
        // 나머지 문자는 변경하지 않음
    }

    cout << str;
    return 0;
}
