#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    deque<pair<int,int>> dq;
    void update(pair<int,int> p,int k,int i)
    {
        while(!dq.empty()&&dq.back()<p)
        {
            dq.pop_back();
        }
        dq.push_back(p);
        while(!dq.empty()&&dq.front().second<=i-k)
        {
            dq.pop_front();
        }
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            update(make_pair(nums[i],i),k,i);
            if(i>=k-1)
            {
                ans.push_back(dq.front().first);
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}
