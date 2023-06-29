#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age, weight;
    while(1) {
        cin >> name >> age >> weight;
        if(name == "#") break;

        if(age > 17 || weight >= 80) {
            cout<< name <<" Senior"<<'\n';
        }else{
            cout<< name <<" Junior"<<'\n';
        }
    }
    return 0;
}