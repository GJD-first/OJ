#include<bits/stdc++.h>
using namespace std;
int mp1[100010];
int mp2[100010];
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        memset(mp1,0,sizeof(mp1));
        memset(mp2,0,sizeof(mp2));
        int n=matches.size();
        for(int i=0;i<n;++i)
        {
            mp1[matches[i][0]]++;
            mp2[matches[i][1]]++;
        }
        vector<vector<int>> ans(2);
        for(int i=0;i<100010;i++)
        {
            if(mp1[i]==0&&mp2[i]==0)continue;
            if(mp2[i]==0)ans[0].push_back(i);
            else if(mp2[i]==1)ans[1].push_back(i);
        }
        return ans;
    }
};
