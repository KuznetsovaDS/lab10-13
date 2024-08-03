#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename Container>
void Print(const Container& container, const string& delimiter) {
    bool first = true;
    for (const auto& element : container) {
        if (!first) {
            cout << delimiter;
        }
        cout << element;
        first = false;
    }
    cout << "\n";
}
int main() {
        std::vector<int> data = { 1, 2, 3 };
        Print(data, ", "); // на экране: 1, 2, 3
       
    }

