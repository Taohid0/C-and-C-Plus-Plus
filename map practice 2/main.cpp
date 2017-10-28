#include <bits/stdc++.h>

using namespace std;


int main ()
{
  map<std::string,std::string>
     first = {{"Star Wars","G. Lucas"},{"Alien","R. Scott"},{"Terminator","J. Cameron"}},
     second  = {{"Inception","C. Nolan"},{"Donnie Darko","R. Kelly"}};

  first.swap(second);
       for(map <string,string>:: iterator it = first.begin();it!=first.end();it++){
        cout<<(*it).first;
       }
//  std::cout << "first: ";
//  for (auto& x: first) std::cout << x.first << " (" << x.second << "), ";
//  std::cout << std::endl;
//
//  std::cout << "second: ";
//  for (auto& x: second) std::cout << x.first << " (" << x.second << "), ";
//  std::cout << std::endl;

  return 0;
}
