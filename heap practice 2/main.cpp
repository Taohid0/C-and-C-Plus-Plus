#include <bits/stdc++.h>

using namespace std;

const int mx = 100;

struct heap
{
  int arr[mx+1];
  int n;

  heap(){
  clear();
  }

  void clear()
  {
      n = 0;
  }

  void insert(int k)
  {
      if(n==mx)
      {
          cout<<"heap is full ";
          return;
      }
      n++;
      arr[n] = k;

      int p = n;

      while(p>1)
      {
          int pr = p/2;

          if(arr[pr]>arr[p])
          {
              swap(arr[p],arr[pr]);
              p = pr;
          }
          else
            break;
      }
  }
  int remove()
  {
      if(n==0){
        cout<<"heap is empty ";
        return -1;
      }

      int k = arr[1];


      arr[1]  = arr[n];
      n--;

     int  p =1;

      while(2*p<=n)
      {
          int ch = 2*p;
          if(arr[ch]>arr[ch+1])
          {
              ch++;
          }
          if(arr[p]>arr[ch])
          {
              swap(arr[p],arr[ch]);
              p = ch;
          }
          else
            break;
      }
      return k;
  }
    void printf()
    {
        for(int i = 1;i<=n;i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl;

    }
};

int main()
{   int numbers,value;

    heap h;

    h.clear();

    cout << "how many numbers do you want to enter ? " << endl;
    cin>>numbers;

    for(int i  = 1;i<=numbers;i++)
    {
        cin>>value;
        h.insert(value);
    }
    h.printf();
    cout<<endl;

    for(int i  = 1;i<=numbers;i++)
    {
        cout<<h.remove()<< " ";
    }
    return 0;
}
