#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
struct E {
    string title, author;
    bool operator<(const E &a) const {
        if(author != a.author)
            return author < a.author;
        return title < a.title;
    }
};
//foul problem!
E shelve[10005];
int main() {
    char s[10005];
    int n = 0;
    int i;
    while(gets(s)) {
        if(!strcmp(s, "END"))
            break;
        for(i = 1; s[i] != '\"'; i++);
        s[i] = '\0';
        i += 2;
        for(; s[i] != ' '; i++);
        shelve[n].title = s+1;
        shelve[n].author = s+i+1;
        n++;
    }
    sort(shelve, shelve+n);
    map<string, int> R;
    int borrow[10005], ret[10005];
    for(i = 0; i < n; i++) {
        R[shelve[i].title] = i;
        borrow[i] = 0, ret[i] = 0;
    }
    string cmd, book;
    while(cin >> cmd) {
        if(cmd == "SHELVE") {
            int pre = -1;
            for(i = 0; i < n; i++) {
                if(ret[i] == 1) {
                    if(pre == -1) {
                        printf("Put \"%s\" first\n", shelve[i].title.c_str());
                    } else {
                        printf("Put \"%s\" after \"%s\"\n", shelve[i].title.c_str(), shelve[pre].title.c_str());
                    }
                    ret[i] = 0;
                }
                if(ret[i] == 0 && borrow[i] == 0)
                    pre = i;
            }
            puts("END");
        } else if(cmd == "BORROW") {
            getline(cin, book);
            book = book.substr(2, book.length()-3);
            borrow[R[book]] = 1;
            ret[R[book]] = 0;
        } else if(cmd == "RETURN"){
            getline(cin, book);
            book = book.substr(2, book.length()-3);
            borrow[R[book]] = 0;
            ret[R[book]] = 1;
        } else
            break;
    }
    return 0;
}

