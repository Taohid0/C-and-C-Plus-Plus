#include <bits/stdc++.h>

using namespace std;

struct w{
    int length;
    string word;

    bool operator <(const w &  p)const {
    return p.length>length;
    }
    }wrd;

int main()
{
   int numberOfWords;
   string word,pcWord;
   int s1=0,s2=0;

   map<char,priority_queue<w> >mp;

   cout<<"Enter some words for PC"<<endl;
   cin>>numberOfWords;
   getchar();

   for(int i=0;i<numberOfWords;i++)
   {
       cin>>word;
       wrd.length=word.size();
       wrd.word=word;

       mp[word[0]].push(wrd);
   }
   cout<<"Let\'s start the game"<<endl<<endl;

   for(int i=1;i<3;i++){
        cout<<"Enter your word"<<endl;
        cin>>word;
        s1+=word.size();
        wrd=mp[word[word.size()-1]].top();
        mp[word[word.size()-1]].pop();
        cout<<"PC\'s word "<<wrd.word<<endl;
        s2+=wrd.length;
   }

   cout<<endl;

   if(s1>s2)
    cout<<"You won";
   else if
   (s2>s1)cout<<"PC won";
   else
   cout<<"match drawn";

   cout<<endl<<"Your score = "<<s1<<endl<<"PC's score = "<<s2<<endl;
    return 0;
}
