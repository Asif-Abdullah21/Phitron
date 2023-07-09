class MinStack {
public:

    stack<int> st,mn;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mn.empty()) mn.push(val);
        else mn.push(min(mn.top(),val));
    }
    
    void pop() {
        st.pop(); 
        mn.pop(); 
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};

/*
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */






/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||


//leetCode problem link: https://leetcode.com/problems/min-stack/description/
#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:

    stack<int> s1,s2;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s1.empty()){
            s1.push(val);
            s2.push(val);
            return;
        }        
        s1.push(val);
        s2.push(min(s2.top(),val));
    }
    
    void pop() {
        if(s1.empty()) return;
        s1.pop();    
        s2.pop();    
    }
    
    int top() {
        return s1.top();
        
    }
    
    int getMin() {
        return s2.top();
    }
};







*/