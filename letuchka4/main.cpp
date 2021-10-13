#include <iostream>
#include <iomanip>
struct MobilePhone
        {
    double weight;
    bool is_broken;
    double price;
        };

int main() {
    int n;
    std::cin >> n;
    MobilePhone* Mp = new MobilePhone[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> Mp[i].weight;
        std::cin >> Mp[i].is_broken;
        std::cin >> Mp[i].price;
    }
    std::cout << std::boolalpha;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "<MobilePhones>\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "\t<MobilePhone id=\"" << i << "\" weight=\"" << Mp[i].weight << "\"  is broken=\"" << Mp[i].is_broken << "\"  price=\"" << Mp[i].price << "\"/>\n";
    }
    std::cout << "</MobilePhones>\n";
    return 0;
}
