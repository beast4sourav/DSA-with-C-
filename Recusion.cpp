#include <iostream>
using namespace std;

void test(int count){
    if(count == 4){
        return;
    }
    cout << count << " ";
    test(count + 1);
}

int main() {
    test(0);  
    return 0;
}
