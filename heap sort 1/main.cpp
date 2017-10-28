#include <bits/stdc++.h>

using namespace std;

int arr[100];
int n = 0;
void insert (int k)
{
    n++;

    arr[n] = k;

    int p = n;
    while(p>1)
    {
     int pr  = p/2;

     if(arr[p]<arr[pr])
     {
         swap(arr[p],arr[pr]);
         p  = pr;
     }
     else
        break;
    }
}
    int remove ()
    {
        int k = arr[1];

        arr[1] = arr[n];
        n--;

       int p = 1;

        while(p*2<=n)
        {
            int ch= p*2;

            if(p*2+1<=n)
            {
                if(arr[ch]>arr[ch+1])
                {
                    ch++;
                }
            }
            if(arr[ch]<arr[p])
            {
                swap(arr[p],arr[ch]);
                p  = ch;
            }
            else break;
        }
        return k;
    }

    void print()
    {
        for(int i = 1;i<=10;i++)
        { int n = remove();
            cout<<n<< " ";
        }
    }



int main()
{  int n;
    for(int i = 1;i<=10;i++)
    {    cin>>n;
        insert(n);
    }
    print();

    return 0;
}
