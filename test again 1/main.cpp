#include <bits/stdc++.h>

using namespace std;
class book
{
string name;
string writer;
int price;
public:
void setn(string n);
void setw(string w);
void setp(int p);
void show();
};
void book::setn(string n){ name=n;}
void book::setw(string w){writer=w;}
void book::setp(int p){price=p;}
void book::show(){ cout<<"Book name : "<<name<<" ** Writer : "<<writer<<" ** Price : "<<price<<endl;}
main()
{
int i,p;
string n;
string w;
book b[5];
for(i=0; i<5; i++){
cout<<"Enter book name"<<endl;
getline(cin,n);
b[i].setn(n);
cout<<"Enter writer name"<<endl;
getline(cin,w);
b[i].setw(w);
cout<<"Enter book price"<<endl;
cin>>p;
b[i].setp(p);
}
for(i=0; i<5; i++){
b[i].show();
}
}

