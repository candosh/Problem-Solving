#include <string>
#include <vector>

using namespace std;

// number : 숫자 배열, target : 원하는 숫자
// solution 함수 : taerget을 만들 수 있는 방법의 수 -> DFS 재귀로 만들기

int answer = 0;

void get_number(vector<int> numbers, int target, int sum, int index)
{
	if (index == numbers.size())
	{
		if (sum == target)
			answer++;
		return;
	}

	get_number(numbers, target, sum + numbers[index], index + 1);
	get_number(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target)
{
	get_number(numbers, target, 0, 0);
	return answer;
}