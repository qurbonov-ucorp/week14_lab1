#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("source.txt");
    ofstream dest("copy.txt");
    string line;
    while (getline(src, line))
        dest << line << endl;
    src.close();
    dest.close();
}
