#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cin >> filename;
    ifstream file(filename);
    char c;
    int count = 0;
    while (file.get(c))
        count++;
    cout << count;
    file.close();
}
