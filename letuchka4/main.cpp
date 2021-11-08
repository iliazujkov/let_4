#include <iostream>
#include <iomanip>
struct MobilePhone
{
    double weight;
    bool is_broken;
    double price;
    void toXML(MobilePhone* Mp, int n) {
        std::cout << std::boolalpha;
        std::cout << std::fixed;
        std::cout << "<MobilePhones>\n";
        for (int i = 0; i < n; ++i) {
            std::cout << "\t<MobilePhone id=" << "\"" << i << "\"" << std::setprecision(1) << " weight=" << "\"" << Mp[i].weight << "\"" << "  is broken=" << "\"" << Mp[i].is_broken << "\"" << "  price=";
            (int(Mp[i].price * 10) % 10 == 0) ? std::cout << std::setprecision(0) << "\"" << Mp[i].price << "\"/> \n" : std::cout << std::setprecision(2) << "\"" << Mp[i].price << "\"/> \n";
        }
        std::cout << "</MobilePhones>\n";
    }
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
    Mp->toXML(Mp, n);
    return 0;
}
