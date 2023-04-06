#include <iostream>
using namespace std;

int main() {
    int i;
   int  marks[] = {23, 45, 56, 89};
    //cout << marks[0]<<endl;
    //cout << marks[1]<<endl;
    //cout << marks[2]<<endl;
    //cout << marks[3]<<endl;
    for(i=0; i<=3; i++){
        cout << "marks of " <<i<<" is: " << marks[i]<<endl;
        
    }
    return 0;
}