void reverseStack(stack<int> &st) {

    if(st.empty()) return;
    int x = st.top();
    st.pop();

    reverseStack(st);

    stack<int> temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    temp.push(x);

    while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}