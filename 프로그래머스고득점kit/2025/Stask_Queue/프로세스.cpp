#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location)
{
	int answer = 0;
	queue<pair<int, int>> q;
	priority_queue<int> pq;

	for (int i = 0; i < priorities.size(); i++)
	{
		q.push({priorities[i], i});
		pq.push(priorities[i]);
	}

	while (!q.empty())
	{
		int currP = q.front().first;
		int currI = q.front().second;
		q.pop();

		if (currP < pq.top())
		{
			q.push({currP, currI});
		}
		else
		{
			answer++;
			pq.pop();
			if (currI == location)
			{
				return answer;
			}
		}
	}
}
