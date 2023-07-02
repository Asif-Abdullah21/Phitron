class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int last_element;
        queue<int> newQ;
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            if(q.empty())
            {
                last_element = temp;
                break;   
            }
            newQ.push(temp);
            // if(!q.empty()) newQ.push(temp);
            // else last = temp;
        }
        q = newQ;
        return last_element;
    }
    
    int top() {
        int last;
        queue<int> newQ;

        while(!q.empty())
        {
            int temp = q.front();
            q.pop();

            if(q.empty()) last = temp;
            newQ.push(temp);
        }
        q = newQ;
        return last;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */