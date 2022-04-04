class Solution {
public:
    vector<int> tr=vector<int>(20010,0);
    int lowbit(int i)
    {
        return i&(-i);
    }
    void update(int i)
    {
        while(i<20010)
        {
            tr[i]+=1;
            i+=lowbit(i);
        }
    }
    int query(int i)
    {
        int ans=0;
        while(i>0)
        {
            ans+=tr[i];
            i-=lowbit(i);
        }
        return ans;
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--)
        {
            ans[i]=query(nums[i]+10000);
            update(nums[i]+10001);
        }
        return ans;
    }
};
