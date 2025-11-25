#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string s;
    cout<<"What do you want to enter: "<<endl;
    getline(cin, s);

    ofstream banana("message.txt");
    banana <<s;

    banana.close();
    return 0;


}