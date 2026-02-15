#include "utils.h"
#include <bits/stdc++.h>
using namespace std;

inline void readFile(const string &filename, vector<string> &names, vector<string> &positions);

void part2() {
    vector<string> names, positions;
    readFile("part2.txt", names, positions);

    int n = names.size();
    int pos = 0;

    for (auto &instr : positions) {
        char direction = instr[0];
        int steps = stoi(instr.substr(1));

        if (direction == 'R')
            pos = (pos + steps) % n;
        else
            pos = (pos - steps % n + n) % n;
    }

    cout << names[pos] << "\n";
}
