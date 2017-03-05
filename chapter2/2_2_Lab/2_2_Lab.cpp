#include <iostream>
using namespace std;
int main()
{
    char input_char;
    int  total_items;
    int  choose_items;
    long CP_total;
    long n_factorial = 1;
    long k_factorial = 1;
    long nmk_factorial = 1;
    
    int i = 1;
    
    while (i == 1)
    {
        cout << "Please input the number of total items. ( <15 )" << endl;
        cin >> total_items;
        if (total_items > 15) continue;
        cout << "Please enter the number of those you would like to choose." << endl;
        cin >> choose_items;
        if (choose_items > total_items) continue;
        i--;
    }
    
    //cout << "total_items: " <<  total_items << endl;
    //cout << "choose_items: " <<  choose_items << endl;
    
    for (int i = 1; i <= total_items; i++)
    {
        n_factorial = n_factorial * i;
    }
    //cout << "n_factorial: " << n_factorial << endl;
    
    for (int i = 1; i <= choose_items; i++)
    {
        k_factorial = k_factorial * i;
    }
    //cout << "k_factorial: " << k_factorial << endl;
    
    for (int i = 1; i <= (total_items - choose_items); i++)
    {
        nmk_factorial = nmk_factorial * i;
    }
    //cout << "nmk_factorial: " << nmk_factorial << endl;
    
cploop:
    cout << "Please enter a 'C' for combinations or a 'P' for permutations." << endl;
    cin >> input_char;
    
    
    if (input_char == 'C')
    {
        CP_total = n_factorial/(nmk_factorial * k_factorial);
        cout << "Total combinations are " << CP_total << endl;
    }
    
    else if (input_char == 'P')
    {
        CP_total = n_factorial/nmk_factorial;
        cout << "Total permutations are: " << CP_total << endl;
    }
    
    else
    {
        cout << "This character is not an acceptable input." << endl;
        goto cploop;
    }
    
    //cout << "k_factorial end: " << k_factorial << endl;
    //cout << "n_factorial end: " << n_factorial << endl;
    //cout << "nmk_factorial end: " << nmk_factorial << endl;
    //cout << "CP_total: " << CP_total << endl;

    return 0;
}