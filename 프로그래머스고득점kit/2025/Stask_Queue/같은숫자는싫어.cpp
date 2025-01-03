// ## 배운점

// ---

// - 처음에 배열 마지막 생각 안하고 테스트에서 맞아서 그냥 for문 돌려서 냈었다.
// - 하지만 실제 제출 결과 마지막에서 걸렸고, 아마 마지막 배열까지 그냥 돌아서 그랬던 거 같다.
// - 근데 배열 -1해주긴 했는데 좋지 않은 코드 같다.
// - 생각해보니 무조건 초기 숫자는 push가 되니까 초기에 배열 0을 push해주고 배열 끝까지 안 가게 했어야 한다.
// - 이런 문제 일때 초기 숫자는 push하고 시작하기 메모!!!!!

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	for (int i = 0; i < arr.size(); i++)
	{
		if (i < arr.size() - 1 && arr[i] == arr[i + 1])
		{
			continue;
		}
		else
		{
			answer.push_back(arr[i]);
		}
	}

	return answer;
}