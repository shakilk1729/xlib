/*
Copyright (C) 2009-2017 Free Software Foundation, Inc.

Written by Shakil A Khan <shakilk1729@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.
*/

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
