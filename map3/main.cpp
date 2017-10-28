#include <bits/stdc++.h>

using namespace std;

int main()
{  map<string,int>emp;

   emp["mike"] = 100;
   emp["marcula"] = 101;

   for(map<string,int>::iterator it = emp.begin();it!=emp.end();it++){
    cout << (*it).first<<" : "<<(*it).second<<endl;
   }

    return 0;
}
