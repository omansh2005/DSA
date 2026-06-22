#include <queue>

class RecentCounter {
private:
    std::queue<int> q;
    
public:
    RecentCounter() {
        // Initializes the counter
    }
    
    int ping(int t) {
        // Add current request
        q.push(t);
        
        // Remove requests that are older than t - 3000
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        
        // The remaining size is the count of recent requests
        return q.size();
    }
};