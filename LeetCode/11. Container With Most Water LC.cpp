class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int x = 0;
        int y = height.size() - 1;

        int ans = 0;

        while (y > x)
        {
            ans = max(ans, (y - x) * min(height[x], height[y]));
            if (height[x] > height[y])
                y--;
            else
                x++;
        }

        return ans;
    }
};