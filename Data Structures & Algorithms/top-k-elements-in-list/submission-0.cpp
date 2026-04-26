struct CompareFreq {
    bool operator()(const vector<int>& v1, const vector<int>& v2) {
        return v1[1] < v2[1];
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> result;

        for (int i : nums) 
            mp[i]++;

        priority_queue<vector<int>, vector<vector<int>>, CompareFreq> pq;

        for (auto& pair: mp) {
            pq.push({pair.first, pair.second});
        }

        while (k > 0) {
            result.push_back(pq.top()[0]);
            pq.pop();
            k--;
        }

        return result;
    }
};
