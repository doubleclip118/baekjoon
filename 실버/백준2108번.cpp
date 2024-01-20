#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int list_du[8003]={0,};

int main(){
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    int number, temp, sum = 0, mid, range, poly = 0, max = -1, index, min1 = -1, min2 = -1;
    vector<int> list;
    cin >> number;
    for(int i = 0; i < number; i++){
        cin >> temp;
        index = temp + 4000;
        list_du[index]++;
        list.push_back(temp);
        sum += temp;
        if(list_du[index] > max){
            max = list_du[index];
        }
    }
    sort(list.begin(), list.end());
    mid = number / 2;
    range = list[list.size() - 1] - list[0]; // 범위 계산 수정
    bool flag = false;
    for(int i = -4000; i < 4000; i++){
        index = i + 4000;
        if (list_du[index] == max) {
            if (!flag) {
                min1 = i;
                flag = true;
            } else {
                min2 = i;
                break; // 두 번째 최빈값을 찾았으므로 루프 종료
            }
        }
    }
    poly = (min2 == -1) ? min1 : min2;

    if(number == 1){
        range = 0;
        poly = list[0];
    }
    double avg = double(sum) / number;
    if (avg < 0 && avg > -1) {
        avg = 0;
    } else {
        avg = round(avg);
    }
    cout << avg << "\n" << list[mid] << "\n" << poly << "\n" << range;

    return 0;
}
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// #include<vector>
// using namespace std;

// int coordinate[500001];
// int cnt[8001];
// int N, a, b, c, d;
// int sum = 0;

// int main()
// {
// 	cin >> N;

// 	for (int i = 0; i < N; i++)
// 	{
// 		cin >> coordinate[i];
// 		sum += coordinate[i];
// 		cnt[coordinate[i]+4000]++;
// 	}
	
// 	sort(coordinate, coordinate + N);
	
// 	int flag;
// 	int max = 0;
	
// 	for (int i = 0; i < 8001; i++)
// 	{
// 		if (cnt[i] > max)
// 		{
// 			max = cnt[i];
// 			flag = i;
// 		}
// 	}

// 	for (int i = flag + 1; i < 8001; i++)
// 	{
// 		if (cnt[i] == max)
// 		{
// 			flag = i;
// 			break;
// 		}
// 	}

// 	a = round(double(sum) / N);
// 	b = coordinate[(N - 1) / 2];
// 	c = flag - 4000;
// 	d = coordinate[N - 1] - coordinate[0];

// 	cout << a << "\n";
// 	cout << b << "\n";
// 	cout << c << "\n";
// 	cout << d << "\n";
// }