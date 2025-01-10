// 의상 종류로 구분하는 것

#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
	int answer = 0;

	map<string, int> m;

	for (int i = 0; i < clothes.size(); i++)
	{
		vector<string> temp = clothes[i];
		m[temp[1]]++;
	}
	int res = 1;

	for (auto it = m.begin(); it != m.end(); it++)
	{
		res *= (it->second) + 1;
	}

	return res - 1;
}