// 풀이 : https://seize-the-day9.tistory.com/50
#include <iostream>
using namespace std;

int main()
{
	int val, cnt[26] = {
				 0,
			 };
	string str, result;

	cin >> val;

	for (int i = 0; i < val; i++)
	{
		cin >> str;
		cnt[str[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (cnt[i] >= 5)
		{
			result += (i + 'a');
		}
	}

	if (result.size())
	{
		cout << result << "\n";
	}

	else
		cout << "PREDAJA" << "\n";

	return 0;
}