// 종류 값과 , n/2의 값 중 더 작은 값을 출력하면 되는 문제
// 얘는 set==집합(중복여부 자체 판단), 굳이 map을 쓸 문제는 아니다

#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
	int answer, tmp = 0;
	set<int> s;

	for (int i = 0; i < nums.size(); i++)
	{
		s.insert(nums[i]);
	}

	answer = min(s.size(), nums.size() / 2);

	return answer;
}