#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const vector<string> keys = {
        "Apple", "Banana", "Coconut", "Durian"
    };
    const vector<int> vals = {
        300, 110, 700, 1000
    };
    const int keys_size = keys.size();
    const int vals_size = vals.size();
    if (keys_size != vals_size) return 1;

    const int divisor = 10;
    for (int i = 0; i < keys_size; ++i) {
        cout << keys[i] << ":" << endl;
        const int num = vals[i] / divisor;
        for (int j = 0; j < num; ++j) {
            cout << "#";
        }
        cout << " (" << vals[i] << ")" << endl;
    }

    return 0;
}
