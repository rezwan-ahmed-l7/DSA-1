class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int count[2] = {0, 0};

        for (int s : students)
        {
            count[s]++;
        }

        for (int i = 0; i < sandwiches.size(); i++)
        {
            int top = sandwiches[i];

            if (count[top] == 0)
            {
                return sandwiches.size() - i;
            }

            count[top]--;
        }

        return 0;
    }
};