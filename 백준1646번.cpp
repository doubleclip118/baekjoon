#include <iostream>
using namespace std;

int main(){
    int num, count = 0;
    cin >> num;
    
    while (num > 0) {
        num /= 5;
        count += num;
    }

    cout << count;
    return 0;
}
