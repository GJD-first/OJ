#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+candies[i];
        }
        if(sum<k)return 0;
        if(sum==k)return 1;
        sort(candies.begin(),candies.end());
        long long nw;
        int ans=1;
        int left=1,right=candies[n-1];
        while(left<=right)
        {
            nw=0;
            int mid=left+(right-left)/2;
            for(int t=n-1;t>=0&&candies[t]>=mid;t--)
            {
                nw+=candies[t]/mid;
            }
            if(nw>=k)
            {
                ans=max<int>(ans,mid);
                left=mid+1;
                continue;
            }
            right=mid-1;
        }
        return ans;
    }
};
