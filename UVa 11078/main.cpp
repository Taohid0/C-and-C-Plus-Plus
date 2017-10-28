#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n;

    cin>>test;

    while(test--)
    {  int present_marks;
        int previous_marks ;
        int result,a1,a2;

        cin>>n;
        cin>>a1>>a2;
        n-=2;
        previous_marks= max(a1,a2);
        result = a1-a2;
        while(n--)
        {
            cin>>present_marks;

            if(previous_marks-present_marks>result)
            {
                result = previous_marks-present_marks;
            }
            if(present_marks>previous_marks)
            {
                previous_marks = present_marks;
            }
        }
       cout<<result;
       cout<<endl;
    }
    return 0;
}
