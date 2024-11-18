#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(20);
    st.push(10);
    st.push(540);
    st.push(5);
    st.pop();
    cout << "Stack top: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}