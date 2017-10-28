#include <bits/stdc++.h>

using namespace std;

int main()
{   map<int,string> employee;

    employee[100] = "mike";
    employee[101] = "marcula";
    employee[15] = "jobs";
    employee[10] = "mike";
    employee[1100] = "mike";

    cout << "size of map is " <<employee.size() << endl;

    for(map<int,string>::iterator it = employee.begin();it!=employee.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;

    }
    return 0;
}
