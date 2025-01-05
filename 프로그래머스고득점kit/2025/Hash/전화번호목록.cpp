// 한 번호가 다른 번호의 접두어로 있는지 확인하는 문제
// 전화번호를 사전 순으로 정렬하고 풀면 됨

// compare는 두 문자열(또는 부분 문자열)을 사전 순으로 비교하고 정수값을 반환:

// 0: 두 문자열이 동일
// < 0: 호출 문자열이 비교 대상보다 사전적으로 작음
// > 0: 호출 문자열이 비교 대상보다 사전적으로 큼

#include <string>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool solution(vector<string> phone_book)
{
	bool answer = true;

	sort(phone_book.begin(), phone_book.end());

	for (int i = 1; i < phone_book.size(); i++)
	{
		if (phone_book[i].compare(0, phone_book[i - 1].size(), phone_book[i - 1]) == 0)
		{
			answer = false;
		}
	}

	return answer;
}