        MinHeap free(greater<>{}, std::move(all));

        MinHeap busy;
        vector<int> ans;
        for (int s = 0; s < ssize(tasks); ++s) {
            while (!busy.empty() && busy.top().at <= s) {  // done by second s
        for (int i = 0; i < ssize(servers); ++i) all.push_back({0, servers[i], i});
        vector<Server> all;
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
public:

    };
    using MinHeap = priority_queue<Server, vector<Server>, greater<>>;
        int weight, index;
        auto operator<=>(const Server&) const = default;
        long long at;  // the second it frees up; 0 while free, so free servers sort by weight, then index
struct Server {
class Solution {
