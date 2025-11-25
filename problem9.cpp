#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream input("input.txt");
    input << "1 4 7 10";
    input.close();

    ifstream inFile("input.txt");
    ofstream outFile("even.txt");

    int x;
    while (inFile >> x)
        if (x % 2 == 0)
            outFile << x << " ";

    inFile.close();
    outFile.close();
}
