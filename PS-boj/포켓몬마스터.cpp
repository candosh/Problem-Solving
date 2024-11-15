// https://seize-the-day9.tistory.com/54

#include <bits/stdc++.h>
using namespace std;

int n, m;
string s;
map<string, int> map1;
map<int, string> map2;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		map1[s] = i;
		map2[i] = s;
	}

	for (int i = 1; i <= m; i++)
	{
		cin >> s;
		if (atoi(s.c_str()) == 0)
		{
			cout << map1[s] << "\n";
		}
		else
		{
			cout << map2[atoi(s.c_str())] << "\n";
		}
	}

	return 0;
}