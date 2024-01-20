#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M, N;
	int not_prime_num;
	int root;	// 제곱근
	cin >> M >> N;
	
	for (int i = M; i <= N; i++) {
		not_prime_num = 0;
		root = (int)sqrt(i);

		// 1은 소수가 아니므로 따로 count
		if (i == 1) {
			not_prime_num++;
			continue;
		}

		// 2부터 제곱근값 전까지 나눠지는 수가 있다면 소수가 아님
		for (int j = 2; j <= root; j++) {
			if (i % j == 0) {
				not_prime_num++;
				break;
			}
		}

		// 약수의 개수가 0개 = 소수이므로 출력
		if (not_prime_num == 0) {
			cout << i << '\n';	// endl 사용시 시간초과 발생
		}
	}

	return 0;
}
