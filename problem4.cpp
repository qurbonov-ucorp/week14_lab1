#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:" <<endl;
    cin>>n;
    ofstream banana("count.txt");
    for(int i = 1; i < n + 1; i++){
        banana << i;
    }
    banana.close();
    return 0;
}