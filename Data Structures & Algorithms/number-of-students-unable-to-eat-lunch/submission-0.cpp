class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stu, sand;

        for (auto i : students)
            stu.push(i);

        for (auto i : sandwiches)
            sand.push(i);

        int count = stu.size();

        while (!stu.empty() && !sand.empty() && count) {
            if (stu.front() == sand.front()) {
                stu.pop();
                sand.pop();
                count = stu.size();
            } else {
                stu.push(stu.front());
                stu.pop();
                count--;
            }
        }

        return stu.size();
    }
};