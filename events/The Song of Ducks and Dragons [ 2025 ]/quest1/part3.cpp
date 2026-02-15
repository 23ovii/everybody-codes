#include "utils.h"
#include <bits/stdc++.h>
using namespace std;

inline void readFile(const string &filename, vector<string> &names, vector<string> &positions);

void part3() {
    vector<string> names, positions;
    readFile("part3.txt", names, positions);

    int n = names.size();

    for (auto &instr : positions) {
        char direction = instr[0];
        int steps = stoi(instr.substr(1));

        int index;
        if (direction == 'R') {
            index = (0 + steps) % n;
        } else {
            index = (0 - steps % n + n) % n;
        }
        
        swap(names[0], names[index]);
    }

    cout << names[0] << "\n";
}
