#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct stdnt{
   int cgpa,roll;
   };
   stdnt aa[10];


int  compare(stdnt a,stdnt b)
{
 return a.cgpa<b.cgpa;
}



int main()
{aa[0].cgpa = 10;
  aa[0].roll = 20;
   aa[1].cgpa = 110;
  aa[1].roll = 120;
  //  int n,a[100];
  //  cin>>n;
   // for(int i = 0;i<n;i++)
  //  {
  //      cin>>a[i];
   // }
   // quickSort(a,0,n-1);
    //qsort(a,n);
    //sort(aa,aa+2,compare);
    qsort(aa,2,sizeof(int),compare(aa[0]),a[1]))
  qsort(aa,2,sizeof(int),compare);
    for(int i = 0;i<2;i++)
        cout<<aa[i].cgpa<< " ";
    return 0;
}
