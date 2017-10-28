#include <iostream>

using namespace std;

const int maxx =  1000;

struct heap{
        int myarray[maxx+1];
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
            if(n==maxx)
            {
                cout<<"heap is full ";
                return ;
            }
            n++;

            myarray[n] = element;
            int current_posision = n;

            while(current_posision>1)
            {
                int p = current_posision/2;

                if(myarray[p]>myarray[current_posision])
                {
                    swap(myarray[p],myarray[current_posision]);
                    current_posision  = p;
                }
                else break;
            }
        }
        int remove()
        {
            if(n==0){
                cout<<"heap is empty ";
                return -1;
            }
            int return_element = myarray[1];

            myarray[1]  = myarray[n];
            n--;
            int p = 1;
            while(p*2<=n)
            {   int ch  = 2*p;

                if((2*p+1<=n) && (myarray[ch]>myarray[ch+1]))
                   {
                       ch++;
                   }
                   if(myarray[ch]<myarray[p])
                    {
                        swap(myarray[ch],myarray[p]);
                        p = ch;
                    }
                    else
                       break;
            }
             return return_element;
        }

        void print()
        {
            cout<<"the elements are :";
            for(int i = 1;i<=n;i++)
            {
                cout<<myarray[i]<< " ";
            }
            cout<<endl;
        }

        };

int main()
{
    heap h;

    h.clear();

    h.insert(7);
    h.insert(6);
    h.insert(5);
    h.insert(4);
    h.insert(3);
    h.insert(2);

    h.print();
    cout<<h.remove()<< " ";
   cout<<h.remove()<< " ";
   cout<<h.remove()<< " ";
   cout<<h.remove()<< " ";


    return 0;
}
