#include <vector>
#include <queue>

// 위치와 우선 순위를 pair로 저장
// 우선 순위 큐 사용 priority_queue

using namespace std;

// top()은 요소를 확인하기 위해 사용하고, pop()은 요소를 큐에서 제거할 때 사용

int solution(vector<int> priorities, int location)
{
	int answer = 0;
	queue<pair<int, int>> processQu;
	priority_queue<int> orderQu;

	for (int i = 0; i < priorities.size(); i++)
	{
		processQu.push({priorities[i], i}); // 각각 값들의 순위 저장
		orderQu.push(priorities[i]);
	}

	while (!processQu.empty())
	{
		int currP = processQu.front().first;
		int currI = processQu.front().second;
		processQu.pop();

		// 현재 프로세스보다 높은 우선순위가 있다면 다시 큐에 넣기
		if (currP < orderQu.top())
		{
			processQu.push({currP, currI});
		}
		else
		{
			// 실행할 차례니, 순서 증가
			answer++;
			orderQu.pop();
			// 내가 찾는 location과 동일하면 값 배출
			if (currI == location)
			{
				return answer;
			}
		}
	}
}