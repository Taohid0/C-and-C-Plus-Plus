#include <bits/stdc++.h>

using namespace std;

const int mx = 100;

struct heap{
         int arr[mx+1];
         int n;

         void clear()
         {
             n = 0;
         }
         heap()
         {
             clear();
         }

         void insert(int element)
         {
             if(mx==n)
             {
                 cout<<"heap is full ";
                 return ;
             }
             n++;

             arr[n] = element;

            int  p = n;

            while(p>1)
            {
                int pr = p/2;
                if(arr[pr]>arr[p])
                {
                    swap(arr[p],arr[pr]);
                    p= pr;
                }
                else
                    break;
            }
         }

         int remove(){
             if(n==0)
             {
                 cout<<"heap is empty ";
                 return -1;
             }
             int return_element  = arr[1];
             arr[1]= arr[n];
             n--;

             int p = 1;

             while(2*p<=n)
             {
                 int ch =2*p;

                 if(2*p+1<=n)
                 {
                     if(arr[ch]>arr[ch+1])
                     {
                         ch++;
                     }
                 }
                 if(arr[ch]<arr[p])
                 {
                     swap(arr[ch],arr[p]);
                     p =ch;
                 }
                 else break;
             }
             return return_element;
            }

            void print()
            {
                cout<<"the elements are : ";
                for(int i = 1;i<=n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
         };

int main()
{
    heap h;

    h.insert(6);
    h.insert(4);
    h.insert(12);
    h.insert(2);
    h.insert(1);
    h.insert(0);

    h.print();

    for(int i = 1;i<=5;i++)
    {
        int result = h.remove();
        cout<<result<<" ";
    }
    return 0;
}
