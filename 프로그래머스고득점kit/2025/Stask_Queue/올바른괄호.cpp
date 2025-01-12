// ')'만 나온경우 예외처리 해줘야함 주의!

#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
	bool answer = true;
	int count = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (count < 0)
		{
			return answer = 0;
		}
		if (s[i] == '(')
		{
			count++;
		}
		else
			count--;
	}

	if (count == 0)
	{
		answer = 1;
	}
	else
		answer = 0;

	return answer;
}