#include <iostream>
using namespace std;

int main()
{
    int number;
    
    srand(time(NULL));
    
    //number = rand() % 10 + 1;
    
    for(int i = 0; i < 1000; i++)
    {
        number = rand() % 10 + 1;
        cout << i << " " << number << endl;
    }
    
    return 0;
}