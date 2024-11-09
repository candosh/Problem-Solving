// 풀이 링크 : https://seize-the-day9.tistory.com/46

#include <iostream>
using namespace std;

int main()
{
	int Alpha[26] = {
		0,
	};
	string c;

	cin >> c;

	for (int i = 0; i < c.size(); i++)
	{
		Alpha[c[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << Alpha[i] << " ";
	}

	return 0;
}