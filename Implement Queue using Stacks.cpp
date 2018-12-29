class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1, s2;
    int size;
    MyQueue() {
        size=0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
        size++;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        for(int i=0; i<size-1; i++){
            int val=s1.top();
            s2.push(val);
            s1.pop();
        }
        int val=s1.top();
        size--;
        s1.pop();
        while(!s2.empty()) {
            int val=s2.top();
            s1.push(val);
            s2.pop();
        }
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        for(int i=0; i<size-1; i++){
            int val=s1.top();
            s2.push(val);
            s1.pop();
        }
        int val=s1.top();
        while(!s2.empty()) {
            int val=s2.top();
            s1.push(val);
            s2.pop();
        }
        return val;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> front, back;
    MyQueue() {}
    
    /** Push element x to the back of queue. */
    void push(int x) {
        back.push(x);
    }
    void fronttoback(){
        if(front.empty()){
            while(!back.empty()){
                front.push(back.top());
                back.pop();
            }
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        fronttoback();
        int val=front.top();
        front.pop();
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        fronttoback();
        return front.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (front.empty() && back.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
