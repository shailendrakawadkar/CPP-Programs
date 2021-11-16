#include <iostream>

using namespace std;

int main()
{
    int choclates;
    
    cin >> choclates;
    
    int count = choclates;    
    
    while(choclates > 2)
    {
        choclates -= 2;
        count++;
    }

    cout << count;
    return 0;
}
