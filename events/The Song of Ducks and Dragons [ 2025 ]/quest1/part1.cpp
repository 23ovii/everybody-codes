#include "utils.h"
#include <bits/stdc++.h>
using namespace std;

inline void readFile(const string &filename, vector<string> &names, vector<string> &positions);

void part1() {
    vector<string> names, positions;
    readFile("part1.txt", names, positions);

    int n = names.size();
    int pos = 0;

    for (auto &instr : positions) {
        char direction = instr[0];
        int steps = stoi(instr.substr(1));

        if (direction == 'R')
            pos = min(pos + steps, n - 1);
        else
            pos = max(pos - steps, 0);
    }

    cout << names[pos] << "\n";
}
