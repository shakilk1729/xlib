#include <iostream>
#include <string>


using namespace std;

int  main()
{
	string::reverse_iterator rit;
	string str = "This will be reveresed";

	for (rit=str.rbegin(); rit!=str.rend(); ++rit)
    	std::cout << *rit;
	
	cout << "Original string is intact and is " << str << endl;

	return 0;
}
