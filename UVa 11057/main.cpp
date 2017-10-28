#include <bits/stdc++.h>

using namespace std;

int main()
{vector<int>books;
    int number_of_books,book1,book2,money,price;
    string str;

    while(scanf("%d",&number_of_books)==1){
            int maxi = 1000002;
    for(int i =0;i<number_of_books;++i){
        scanf("%d",&price);
        books.push_back(price);
    }

        scanf("%d",&money);
            getline(cin,str);
    getline(cin,str);

    sort(books.begin(),books.end());

    for(int i = 0;i<number_of_books;++i){
        for(int j =i+1;j<number_of_books;++j){
            if(books[i] + books[j]==money && abs(books[i] - books[j])<maxi){
                book1 = books[i];
                book2 = books[j];
            }
        }
    }
    printf("Peter should buy books whose prices are %d and %d.\n\n",book1,book2);}
    return 0;
}
