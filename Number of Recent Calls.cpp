class RecentCounter {
public:
    queue<int>pool;
    RecentCounter() {}
    
    int ping(int t) {
        pool.push(t);
        while(pool.size() > 1 && pool.front() < t - 3000)
            pool.pop();
        return pool.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
