#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,w_n,s_n;

    char word[105];
    char sentence[1000];
    cin>>test;
    for(int t = 1;t<=test;t++)
    {
        map<string,int>mp;

        cin>>w_n;
        getchar();
        for(int i = 0;i<w_n;i++)
        {
            scanf("%s",&word);
            if((int)strlen(word)>2)
            {
                sort(word+1,word+(int)strlen(word)-1);

            }
            mp[word]++;
        }
        cin>>s_n;
        getchar();
        //cout<<"Case "<<t<<": "<<endl;
        printf("Case %d:\n", t);
        while(s_n--)
        {
            char str[105];
            gets(sentence);
            char *p = strtok(sentence," ");
            int r =1;
            while(p!=NULL)
            {
            strcpy(str,p);
            int len = strlen(str);
            if(len>2)
            {
                sort(str+1,str+len-1);
            }

            r*=mp[str];
            //cout<<str<<" "<<mp[str]<<endl;
            p = strtok(NULL," ");

            }
            printf("%d\n",r);
        }
    }
    return 0;
}
