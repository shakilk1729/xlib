#include <xstring.h>
#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <xunistd.h>

using namespace std;


int main()
{
	vector <xstring> l2;
	list <xstring>	l1  {"hello","pello","zello"};
	for(auto l=l1.begin();l !=l1.end();++l)
		cout << *l<<endl;

	//xstring hi = "Hi there how are you.. vsfsd";
	xstring hi = "";
	xstring hii= " ";
	l2 = xsplit(hi);

	cout << " size of l2= " << l2.size()<<endl;

	for(auto l = l2.begin(); l !=l2.end(); ++l)
		cout << *l<<"<"<<">"<<endl;

	xstring myfile = "/tmp/shakil/hello" ;

	if(xaccess(myfile, F_OK) == 0)
	{	
		cout << "file ="<<myfile<< " exist" <<endl;
	}
	else
	{
		cout << "file ="<<myfile<< " doesn not exist" <<endl;
	}

	xstring ss = "this is in all Lower except Two";
	xtolower(ss);
	cout << ss<<endl;

	xtoupper(ss);
	cout << ss<<endl;
	
	xstring needle = "ExcePt";
	cout << xstrcasestr(ss,needle)<<endl;
	
	return 0;
}
