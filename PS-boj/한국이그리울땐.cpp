// https://seize-the-day9.tistory.com/52

#include <iostream>
using namespace std;

int main()
{
	int n, star;
	string str, pre, suf;

	cin >> n >> str;

	star = str.find('*');
	pre = str.substr(0, star);
	suf = str.substr(star + 1);

	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;

		if (pre.size() + suf.size() > tmp.size())
		{
			cout << "NE" << "\n";
		}

		else
		{
			if (tmp.substr(0, pre.size()) == pre && tmp.substr(tmp.size() - suf.size()) == suf)
			{
				cout << "DA" << "\n";
			}
			else
				cout << "NE" << "\n";
		}
	}

	return 0;
}