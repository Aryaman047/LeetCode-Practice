class MyCalendar {
    set<pair<int,int>> cal = {{INT_MAX,INT_MAX}};
public:
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        auto it = cal.upper_bound({start,end});
        bool res = end <= it->second;
        if(res) cal.insert({end,start});
        return res;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */