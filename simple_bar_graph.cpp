#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) return 1;
    const int divisor = atoi(argv[1]);

    // const vector<string> keys = {
    //     "Apple", "Banana", "Coconut", "Durian"
    // };
    // const vector<int> vals = {
    //     300, 110, 700, 1000
    // };
    vector<string> keys;
    vector<int> vals;

    ifstream file("data.csv");
    if (!file.is_open()) return 1;

    string line;
    // Skip the header line
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string key;
        string val_str;

        getline(ss, key, ',');
        getline(ss, val_str, ',');
        int val = stoi(val_str);
        keys.push_back(key);
        vals.push_back(val);
    }

    file.close();

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
