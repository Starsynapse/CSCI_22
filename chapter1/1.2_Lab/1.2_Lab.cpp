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
#include <vector>
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
    int which_set = 1;
    
    int tempElementInt;
    string tempElementString;
    vector<string> setA, setB;
    //vector<int> setB;
    int subIndex = 0;
    int setCardinality[20] = {0};
    
    while (!inputStream.eof())
    {
        index = 0;
        next_element = 0;
        //subIndex = subIndex + 1;
        cout << "sub Index: " << subIndex << endl;
        
        getline(inputStream, element, '\n');
        
        charElement = element.c_str();
        //strcpy (charElement, element.c_str());
        
        while (next_element != 1)
        {
            if (charElement[index] == ' ' || charElement[index] == '\0')
            {
                //cout << "Test: ";
                //tempElement = ss.str();
                //ss >> tempElement;
                //stoi(ss.str());
                tempElementString = ss.str();
                cout << "Hi: " << tempElementString << endl;
                
                
                
                //else
                //{
                
                setCardinality[subIndex] = setCardinality[subIndex] + 1;
                cout << "Current cardinality: " << setCardinality[subIndex] << endl;
                //}
                
                if (charElement[index] == '\0')
                {
                    cout << "Boop" << endl;
                }
                
                if (index == 0)
                {
                    setA.push_back(tempElementString);
                }
                
                if (index == 1)
                {
                    setB.push_back(tempElementString);
                }
                
                /*
                if (charElement[index] != '\0')
                {
                    tempElementInt = stoi(tempElementString);
                    cout << tempElementInt << endl;
                    
                    if (which_set == 1)
                    {
                        setA.push_back(tempElementInt);
                        cout << "Test" << setA[subIndex] << endl;
                        subIndex++;
                    }
                    
                    if (which_set == 2)
                    {
                        setB.push_back(tempElementInt);
                        cout << "Test" << setB[subIndex] << endl;
                        subIndex++;
                    }
                    /*
                    if (which_set == 3)
                    {
                        setC.push_back(tempElementInt);
                        cout << "Test" << setC[subIndex] << endl;
                        subIndex++;
                    }
                    
                    if (which_set == 2)
                    {
                        setD.push_back(tempElementInt);
                        cout << "Test" << setD[subIndex] << endl;
                        subIndex++;
                    }
                }*/
                
                
                
                //cout << "Test: ";
                //cout << ss.str() << endl;
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
        
        which_set++;
        subIndex = subIndex + 1;
    }
    
    inputStream.close();
    
    for (int i = 0; i < 20; i++)
    {
        cout << setCardinality[i] << endl;
    }
    
    cout << "Space woooooo" << endl;
    
    /*
    int meh;
    for (int i = 0; i < 10; i++)
    {
        while (setCardinality[i] > i)
        {
            if (i == 0)
            {
                cout << setA[setCardinality[i]] << endl;
            }
            
            else if (i == 1)
            {
                cout << setB[setCardinality[i]] << endl;
            }
        }
    }
    */
    return 0;
}