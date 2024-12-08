#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const vector<string> keys = {
        "Apple", "Banana", "Coconut ", "Durian"
    };
    const vector<int> vals = {
        300, 110, 700, 1000
    };
    const int size = keys.size();

    cout << size << endl;
    return 0;
}
