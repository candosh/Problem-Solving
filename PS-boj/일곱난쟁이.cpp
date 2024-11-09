// 풀이 링크 https://seize-the-day9.tistory.com/45

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int p[9], sum, A, B;

	for (int i = 0; i < 9; i++)
	{
		cin >> p[i];
		sum += p[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (sum - p[i] - p[j] == 100)
			{
				A = p[i];
				B = p[j];
				break;
			}
		}
	}

	sort(p, p + 9);

	for (int i = 0; i < 9; i++)
	{
		if (p[i] == A || p[i] == B)
			continue;
		cout << p[i] << '\n';
	}

	return 0;
}