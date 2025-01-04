// 참가자 다 넣어주고, 완주한 사람들을 빼주고, 완주 못한 사람을 출력

#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";
	map<string, int> m;

	for (int i = 0; i < participant.size(); i++)
	{
		m[participant[i]]++;
	}

	for (int i = 0; i < completion.size(); i++)
	{
		m[completion[i]]--;
	}

	for (int i = 0; i < participant.size(); i++)
	{
		if (m[participant[i]] > 0)
		{
			return participant[i];
		}
	}
}