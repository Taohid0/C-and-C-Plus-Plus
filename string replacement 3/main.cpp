#include <bits/stdc++.h>

using namespace std;

int main()
{
    int position = 0;
    bool flag = false;
    string s,in,out;

    getline(cin,s);
    cin>>out>>in;

    int sLen =  (int) s.size();
    int inLen = (int) in.size();
    int outLen =(int)out.size();

  //   s[sLen] = '\0';
    for(int i = 0;i<sLen;i++)
    {
        int j = 0;

        while(out[j]==s[i+j])
        {
            j++;

            if(j==outLen)
            {
                flag = true;
                position = i;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }


    int difference = abs(inLen-outLen);

    if(inLen<=outLen)
    {
        for(int i = position+outLen;i<=sLen;i++ )
        {
            s[i-difference] = s[i];
        }

        s.resize(sLen-difference);

    }
    else
    {
        s.resize(sLen+difference);
        for(int i = sLen;i>=position+outLen;i--){
            s[i+difference] = s[i];
        }

    }
    for(int i = 0;i<inLen;i++)
    {
        s[i+position] = in[i];
    }

    cout<<s;



    return 0;
}
