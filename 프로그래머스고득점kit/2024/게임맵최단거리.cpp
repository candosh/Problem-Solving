#include <vector>
#include <queue>
using namespace std;

int BFS(vector<vector<int>> maps)
{
	int directions[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
	queue<pair<int, int>> q;
	int rows = maps.size();
	int cols = maps[0].size();

	q.push({0, 0});

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		int current_distance = maps[x][y];
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + directions[i][0];
			int new_y = y + directions[i][1];

			if (new_x < 0 || new_x >= rows || new_y < 0 || new_y >= cols)
				continue;
			if (new_x == rows - 1 && new_y == cols - 1)
				return current_distance + 1;

			if (maps[new_x][new_y] == 1)
			{
				maps[new_x][new_y] = current_distance + 1;
				q.push({new_x, new_y});
			}
		}
	}
	return -1;
}

int solution(vector<vector<int>> maps)
{
	return BFS(maps);
}
