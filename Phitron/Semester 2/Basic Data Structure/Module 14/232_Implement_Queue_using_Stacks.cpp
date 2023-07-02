class MyQueue {
public:   
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> st_new;
        int first;
        while(!st.empty())
        {
            int temp = st.top();
            st.pop();
            if(!st.empty()) st_new.push(temp);
            else first = temp;
        }

        while(!st_new.empty())
        {
            int temp = st_new.top();
            st.push(temp);
            st_new.pop();
        }
        return first;

    }
    
    int peek() {
        stack<int> st_new;
        int first;
        while(!st.empty())
        {
            int temp = st.top();
            st.pop();
            if(st.empty()) first = temp;
            st_new.push(temp);
        }

        while(!st_new.empty())
        {
            int temp = st_new.top();
            st.push(temp);
            st_new.pop();
        }
        return first;
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */







/*

class MyQueue {
public:   
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> new_st;
        int first;
        while(!st.empty())
        {
            int temp = st.top();
            st.pop();
            if(st.empty())
            {
                //first element;
                first = temp;
                break;
            }
            new_st.push(temp);
        }

        while(!new_st.empty())
        {
            st.push(new_st.top());
            new_st.pop();
        }
        return first;

    }
    
    int peek() {
 stack<int> new_st;
        int first;
        while(!st.empty())
        {
            int temp = st.top();
            st.pop();
            if(st.empty())
            {
                //first element;
                first = temp;
            }
            new_st.push(temp);
        }

        while(!new_st.empty())
        {
            st.push(new_st.top());
            new_st.pop();
        }
        return first;
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */



*/