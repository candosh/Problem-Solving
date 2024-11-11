// 풀이 : https://seize-the-day9.tistory.com/49

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string str, oringStr;

	cin >> str;

	oringStr = str;

	reverse(str.begin(), str.end());

	if (oringStr == str)
	{
		cout << "1";
	}
	else
		cout << "0";
}