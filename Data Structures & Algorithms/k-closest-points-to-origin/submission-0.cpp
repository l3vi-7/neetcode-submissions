class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>> pq;

        for (vector<int>& pt: points) {
            int x = pt[0];
            int y = pt[1];

            double dist = sqrt(x*x + y*y);

            pq.push({dist, {x, y}});

            if (pq.size() > k)
                pq.pop();
        }
        
        vector<vector<int>> result;
        while (pq.size() > 0) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
