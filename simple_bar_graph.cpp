#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) return 1;
    const int divisor = atoi(argv[1]);

    const vector<string> keys = {
        "Apple", "Banana", "Coconut", "Durian"
    };
    const vector<int> vals = {
        300, 110, 700, 1000
    };
    const int keys_size = keys.size();
    const int vals_size = vals.size();
    if (keys_size != vals_size) return 1;

    for (int i = 0; i < keys_size; ++i) {
        cout << keys[i] << ":" << endl;
        const int num = vals[i] / divisor;
        for (int j = 0; j < num; ++j) {
            cout << "#";
        }
        // cout << " (" << vals[i] << ")" << endl;
        cout << " " << vals[i] << endl;
    }

    return 0;
}
