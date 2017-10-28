#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>st;

    st.push(10);
    st.push(15);
    st.push(20);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout << "Hello world!" << endl;
    return 0;
}
