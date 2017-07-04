#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Note:: reverse method modiies the original string
	string str = "This string will be reversed";
	reverse(str.begin(),str.end());
	cout << str;

return 0;
}
