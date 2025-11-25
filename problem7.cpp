#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int x;
    cin >> x;
    ofstream logFile("log.txt", ios::app);
    logFile << x << endl;
    logFile.close();
}
