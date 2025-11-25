#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream banana("numbers.txt");
    int x;
    banana >> x;
    int large = x;
    while(banana >> x){
        if(large << x){
            large = x;
        }
    cout<<"Largest number: "<<large;
    banana.close();
    return 0;

    }
}