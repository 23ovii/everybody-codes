#pragma once
#include <bits/stdc++.h>
using namespace std;

inline void readFile(const string &filename, vector<string> &names, vector<string> &positions) {
    ifstream fin(filename);
    if (!fin) {
        cerr << "Error opening file: " << filename << "\n";
        exit(1);
    }

    string line, cur;

    getline(fin, line);
    cur = "";
    for (char c : line) {
        if (c == ',') {
            names.push_back(cur);
            cur = "";
        } else cur += c;
    }
    if (!cur.empty()) names.push_back(cur);

    getline(fin, line);
    getline(fin, line);
    cur = "";
    for (char c : line) {
        if (c == ',') {
            positions.push_back(cur);
            cur = "";
        } else cur += c;
    }
    if (!cur.empty()) positions.push_back(cur);
}
