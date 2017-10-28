#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,e,x,y,z,pages,frame,pt[20];

     cout<<"Size of process "<<endl;
     cin>>a;

     cout<<"Size of main memory "<<endl;
     cin>>b;

     cout<<"Size of unit "<<endl;
     cin>>c;

     cout<<"Logical address "<<endl;
     cin>>e;

     pages=a/c;
     frame=b/c;

     cout<<"Number of pages "<<pages<<endl;
     cout<<"Number of frames "<<frame<<endl;

     cout<<"Page table ";
     for(auto i=0;i<pages;i++){
        cin>>pt[i];
     }

      x=e/c;
      y=e%c;

      for(auto i=0;i<pages;i++){

        if(i==x){
                z=(pt[i]*c)+y;
        }

      }

    cout<<"\nPage Table "<<endl;
    cout<<"\n\t\tPage Number\t\tFrame Number";

     for(auto i=0;i<pages;i++){
        cout<<"\n\t\t"<<i<<"\t\t\t"<<pt[i]<<endl;
     }

  cout<<"\nProcess Block:\n";
  for(auto i=0;i<pages;i++){
        if(i==x){
                y=pt[i];
    cout<<"\t\t  _______________\n";
    cout<<"\t\t |***************|\n"<<i;

    cout<<"\t\t  ---------------\n";

  }
  else{cout<<"\t\t  _______________\n";
    cout<<"\t"<<i<<"\t |            |\n";
    cout<<"\t\t |                  |\n";
    cout<<"\t\t  ---------------\n";
  }
    }


  cout<<"\nMain Memory Block:\n";
  for(auto i=0;i<frame;i++){
        if(i==y){
    cout<<"\t\t  ______________\n";
    cout<<"\t"<<i<<"\t |***************|\n";
    cout<<"\t\t  ---------------\n";

  }
  else{cout<<"\t\t  _______________\n";
    cout<<"\t"<<"\t |               |\n";
    cout<<"\t\t |                  |\n";
    cout<<"\t\t  ---------------\n";
  }
    }
    cout<<"\n\nPhysical Address "<<z<<"\n\n";

       return 0;
}


