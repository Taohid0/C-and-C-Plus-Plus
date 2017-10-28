#include <bits/stdc++.h>

using namespace std;

const int NN = 100;

struct heap{
        int arr[NN+1];
        int n;

        heap(){
        clear();
        }
        void clear(){
        n = 0;
        }
     void insert(int k)
{
    if(n==NN)
    {
        cout<<"the heap is full ";
        return;
    }
    ++n;
    arr[n] = k;
    int p = n;


    while(p>1)
    {
      int  pr = p/2;

        if(arr[pr]>arr[p])
        {
            swap(arr[pr],arr[p]);
            pr= p;
        }
        else break;
        }
}

        int remove()
        {
            if(n==0)
            {
                cout<<"the heap is empty ";
                return -1;
            }
            int k =  arr[1];
            arr[1] = arr[n];
            n--;

            int p = 1;

            while(2*p<=n)
            {
                int ch = 2*p;

                if(2*p+1<=n)
                {
                    if(arr[ch]>arr[ch+1])
                    {
                        ch++;
                    }
                }
                if(arr[p]>arr[ch])
                {
                    swap(arr[p],arr[ch]);
                    p = ch;
                }
                else break;
            }
            return k;
        }




        void prnt()
        {
            for(int i= 1;i<=n;i++)
            {
                cout<<arr[i]<< "  ";
            }
            cout<<endl;
        }

};

int main()
{   int numbers,value;

    heap H;
    H.clear();

    cout << "how many numbers do you want to enter ? " << endl;
    cin>>numbers;

    while(numbers--)
    {
        cin>>value;
        H.insert(value);
    }
    H.prnt();

    int result = H.remove();
        cout<<result<<endl;

        H.prnt();
        cout<<endl;

    return 0;
}
