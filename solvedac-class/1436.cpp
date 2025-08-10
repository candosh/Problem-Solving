#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int count = 0;
	int number = 665; // ⭐️ 바로 66을 찾기 위한,,

	while (count < n)
	{
		number++;
		if (to_string(number).find("666") != string::npos) // find 함수 사용 시 npos의 뜻은 매우 큰 수
		{
			count++;
		}
	}

	cout << number;
	return 0;
}
