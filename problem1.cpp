#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream banana("input.txt");
    int x, sum = 0;
    while(banana >> x) {
        sum += x;

    }
    cout << sum;
    banana.close();
    return 0;
}
