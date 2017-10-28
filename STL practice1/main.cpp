#include <bits/stdc++.h>

using namespace std;

int main()
{  vector<int>col;
    vector <vector<int> > matrix;//(5,vector<int>(5));
    col.push_back(10);col.push_back(10);col.push_back(10);col.push_back(10);

     matrix.push_back(col);//matrix.push_back(col);matrix.push_back(col);matrix.push_back(col);

     for(vector<vector<int> > ::iterator it = matrix.begin();it!=matrix.end();it++){
            for(vector<int>::iterator itr = it->begin();itr!= it->end();*itr++){


        cout<<*itr<<"  " ;}
        cout<<endl;  }

    return 0;
}
