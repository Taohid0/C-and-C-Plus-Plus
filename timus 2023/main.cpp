#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <cmath>
//net code,foul problem
int main() {
    std::set<std::string> b1 = {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin"};
    std::set<std::string> b2 = {"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"};
    std::set<std::string> b3 = {"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"};

    unsigned short n;
    std::cin >> n;
    int curPos = 0; // 0 - left 1 - center 2 - right
    int dest; // 0 - left 1 - center 2 - right
    int steps = 0;

    for(unsigned short t = 0; t < n; ++t) {
        std::string name;
        std::cin >> name;

        if(b1.find(name) != b1.end()) {
            dest = 0;
        } else if(b2.find(name) != b2.end()) {
            dest = 1;
        } else if(b3.find(name) != b3.end()) {
            dest = 2;
        }
        steps += std::abs(curPos - dest);
        curPos = dest;
    }

    std::cout << steps << std::endl;

    return 0;
}
