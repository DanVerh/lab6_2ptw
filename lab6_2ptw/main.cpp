#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int>num = {1, 0, 0, 1, 0, 1, 0, 0};
    
    
    int x;
    cout << "Do you want count 0 or 1? "; cin >> x;
    
    int am = 0;
    
    for (int n : num){
        if(n == x)
            am ++;
        cout << n << " ";
    }
    
    cout << endl;
    if (x == 1)
    cout << "Amount of ones: " << am;
    else
    cout << "Amount of zeros: " << am;
    cout << endl;
    
    
    return 0;
}
