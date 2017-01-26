/*
 * Project Name: Programming Lab - Sets
 * Created by: Eduardo Zamora
 * Date Created: 25 January 2017
 * Last Edited: 25 January 2017
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	stringstream ss;
	int choice;
	int number = 0;
	int loop = 1;
	string bleh;
    
    while (loop == 1)
    {
        number = 0;
        
    	cout << "Please type the number of the set you wish to view. (0, 1, 2, 3)" << endl;
    	cout << "1 - Set of three-even values." << endl;
    	cout << "2 - Set of even values that are NOT three-even." << endl;
    	cout << "3 - All values that are neither three-even nor even." << endl;
    	cout << "0 - End Program." << endl << endl;
    
    	cin >> choice;
    	cout << endl;
    	
    	if (choice == 0)
    	{
    	    loop = 0;
    	}
    
    	else if (choice == 1)
    	{
    	    cout << "A = {";
    		for (int i = 0; i <= 50; i++)
    		{
    			if (i % 3 == 0)
    			{
    			    if (number > 0)
    			    {
    			        ss << ", ";
    			    }
    			    
    				ss << i;
    				number++;
    			}
    		}
    		
    		cout << ss.str();
    		cout << "}" << endl << "|A| = " << number << endl << endl;
    	}
    	
    	else if (choice == 2)
    	{
    	    cout << "B = {";
    	    for (int i = 0; i <= 50; i++)
    	    {
    	        if (i % 3 != 0)
    	        {
    	            if (number > 0)
    	            {
    	                ss << ", ";
    	            }
    	            
        	        ss << i;
        	        number++;
    	        }
    	    }
    	    
    	    cout << ss.str();
    	    cout << "}" << endl << "|B| = " << number << endl << endl;
    	}
    	
    	else if (choice == 3)
    	{
    	    cout << "C = {";
    	    for (int i = 0; i <= 50; i++)
    	    {
    	        if (i % 3 != 0 && i % 2 != 0)
    	        {
    	            if (number > 0)
    	            {
    	                ss << ", ";
    	            }
    	            ss << i;
    	            number++;
    	        }
    	    }
    	    
    	    cout << ss.str();
    	    cout << "}" << endl << "|C| = " << number << endl << endl;
    	}
    	
    	else
    	{
    	    cout << "Please select a valid option!" << endl;
    	}
    	
    	ss.str("");
    	//system("pause"); 
    }
    
	//system("pause");// hacking microsoft
	return 0;
}
