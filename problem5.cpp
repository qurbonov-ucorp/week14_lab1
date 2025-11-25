#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream banana("a.txt"), orange("b.txt");
    int eat, count = 0;
    while(banana >> eat) {
        count++;
    }
    while(orange >> eat){
        count++;
    }
    banana.close();
    orange.close();
    cout<<count;
    return 0;
}