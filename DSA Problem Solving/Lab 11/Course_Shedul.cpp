class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> graph[10000];
        vector<int> indegree(numCourses, 0);

        for (int i = 0; i < prerequisites.size(); i++)
        {

            int a = prerequisites[i][0];
            int b = prerequisites[i][1];

            graph[b].push_back(a);

            indegree[a]++;
        }

        queue<int> q;

        for (int i = 0; i < numCourses; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        int count = 0;

        while (!q.empty())
        {

            int current = q.front();
            q.pop();

            count++;

            for (int i = 0; i < graph[current].size(); i++)
            {

                int next = graph[current][i];

                indegree[next]--;

                if (indegree[next] == 0)
                {
                    q.push(next);
                }
            }
        }

        if (count == numCourses)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};