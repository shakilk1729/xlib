#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> x;
	vector<int>::iterator it;
	int i;
	
	for(i=0;i<10;++i)
		x.push_back(i);

	//reverse the elements of vector
	reverse(x.begin(), x.end());
	
	cout << "Elements of the vectors are"<<endl;

	for(it=x.begin(); it != x.end() ;++it)
		cout << *it;

	cout << endl;

	return 0;
		
}
