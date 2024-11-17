// https://seize-the-day9.tistory.com/57
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, nTmp;
	string s1, s2;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		map<string, int> map1;
		cin >> nTmp;
		for (int j = 0; j < nTmp; j++)
		{
			cin >> s1 >> s2;
			map1[s2]++;
		}

		long long ret = 1;
		for (auto c : map1)
		{
			ret *= ((long long)c.second + 1);
		}
		ret--;
		cout << ret << "\n";
	}
	return 0;
}