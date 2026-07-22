class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        if (grid.empty() || grid[0].empty())
        {
            return 0;
        }
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        auto dfs = [&](auto &&self, int r, int c) -> void
        {
            if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] != '1')
            {
                return;
            }
            grid[r][c] = '0';

            self(self, r - 1, c);
            self(self, r + 1, c);
            self(self, r, c - 1);
            self(self, r, c + 1);
        };

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (grid[i][j] == '1')
                {
                    ++count;
                    dfs(dfs, i, j);
                }
            }
        }
        return count;
    }
};