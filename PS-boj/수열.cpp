// https://seize-the-day9.tistory.com/53

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, psum[100001] = {
				  0,
			  },
			  maxTmp = -10000004, tmp;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		psum[i] = psum[i - 1] + tmp;
	}

	for (int i = k; i <= n; i++)
	{
		maxTmp = max(maxTmp, psum[i] - psum[i - k]);
	}

	cout << maxTmp << "\n";

	return 0;
}