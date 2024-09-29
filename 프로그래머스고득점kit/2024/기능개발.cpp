#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
	vector<int> answer;
	vector<int> days;
	int temp = 1;

	for (int i = 0; i < progresses.size(); i++)
	{
		// 올림 처리를 위해서 speeds의 값을 더해 줌
		int day = (100 - progresses[i] + speeds[i] - 1) / speeds[i];
		days.push_back(day);
	}

	int curr = days[0];

	for (int i = 1; i < days.size(); i++)
	{
		if (days[i] <= curr)
		{
			temp++;
		}
		else
		{
			answer.push_back(temp);
			temp = 1;
			curr = days[i];
		}
	}

	answer.push_back(temp);

	return answer;
}