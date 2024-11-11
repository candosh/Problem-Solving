//  풀이 : https://seize-the-day9.tistory.com/47

#include <iostream>
using namespace std;

int main()
{
	int arr[101] = {
		0,
	};
	int a, b, c, start, end, sum = 0;

	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++)
	{
		cin >> start >> end;
		for (int i = start; i < end; i++)
		{
			arr[i]++;
		}
	}

	for (int i = 1; i <= 100; i++)
	{
		if (arr[i] == 1)
		{
			sum += a;
		}
		else if (arr[i] == 2)
		{
			sum += b * 2;
		}
		else if (arr[i] == 3)
		{
			sum += c * 3;
		}
	}

	cout << sum;

	return 0;
}