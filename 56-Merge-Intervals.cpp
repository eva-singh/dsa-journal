class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> final;
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<n; i++){
            if(final.empty()||intervals[i][0]>final.back()[1]){
                final.push_back(intervals[i]);
            }
            else{
                final.back()[1]=max(final.back()[1], intervals[i][1]);
            }
        }
        return final;
    }
};