class Solution
{
public:
    //Function to get the maximum total value in the knapsack.

    static bool comp(Item a, Item b)
    {
        double ax = (a.value / (1.0 * a.weight));
        double ay = (b.value / (1.0 * b.weight));
        return ax > ay;
    }

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, comp);

        double ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (W >= arr[i].weight)
            {
                W -= arr[i].weight;
                ans += arr[i].value;
            }
            else
            {
                ans += (arr[i].value / (1.0 * arr[i].weight)) * W;
                W -= W;
                break;
            }
        }
        return ans;
    }
};