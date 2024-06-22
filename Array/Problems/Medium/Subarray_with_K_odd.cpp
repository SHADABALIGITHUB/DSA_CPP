#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {

            for (int j = i; j < nums.size(); j++)
            {

                int odd = 0;
                for (int m = i; m <= j; m++)
                {

                    if (nums[m] % 2 != 0)
                    {
                        odd++;
                    }
                }

                if (odd == k)
                {

                    total++;
                }
            }
        }

        return total;
    }
};
int main()
{

    Solution s;
    vector<int> nums = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k = 2;
    cout << s.numberOfSubarrays(nums, k) << endl;

    return 0;
}