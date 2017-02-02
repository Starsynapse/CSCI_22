/*
 * Project Name: Programming Lab - Relationships
 * Created by: Eduardo Zamora
 * Date Created: 30 January 2017
 * Last Edited: 30 January 2017
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

int main()
{
    ifstream inputStream;
    inputStream.open("input.txt");
    
    string element;
    const char* charElement;
    int index = 0;
    stringstream ss;
    int next_element = 0;
    
    while (!inputStream.eof())
    {
        index = 0;
        next_element = 0;
        
        getline(inputStream, element, '\n');
        
        charElement = element.c_str();
        //strcpy (charElement, element.c_str());
        
        while (next_element != 1)
        {
            if (charElement[index] == ' ' || charElement[index] == '\0')
            {
                cout << "Test: ";
                cout << ss.str() << endl;
                ss.str("");
            }
            
            else
            {
                ss << charElement[index];
                //cout << ss.str() << endl;
            }
            
            if (charElement[index] == '\0')
            {
                next_element++;
            }
            
            index++;
        }
    }
    
    inputStream.close();
    
    return 0;
}