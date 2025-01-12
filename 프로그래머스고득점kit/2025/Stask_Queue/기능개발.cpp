// 현재 값에서 더 큰 값이 생기기 전까지 count해주다가 더 큰 값이 생기면 이전 값은 배포

#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
	vector<int> answer;
	queue<int> q;

	for (int i = 0; i < progresses.size(); i++)
	{
		if ((100 - progresses[i]) % speeds[i] == 0)
		{
			q.push((100 - progresses[i]) / speeds[i]);
		}
		else
			q.push((100 - progresses[i]) / speeds[i] + 1);
	}

	int count = 1;
	int tmp = q.front();
	q.pop();

	while (!q.empty())
	{
		if (tmp >= q.front())
		{
			count++;
		}
		else
		{
			answer.push_back(count);
			tmp = q.front();
			count = 1;
		}
		q.pop();
	}

	answer.push_back(count);

	return answer;
}