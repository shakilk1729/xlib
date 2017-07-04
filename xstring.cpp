#include <xstring.h>
#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <xunistd.h>

using namespace std;


void xstrcpy(xstring &dest, const xstring &src)
{
	dest = src.substr(0, src.length());
}

void xstrcpy(xstring &dest, const xstring &src, size_t len)
{
	dest = src.substr(0, MIN(src.length(),len));
}


vector<xstring> xsplit(const xstring &hay_string, const xstring &needle)
{
        xstring item;
        int delim_size = needle.size();
        int found = 0;
        int start_index = 0;
        vector<xstring>split_string;

	if (hay_string.size() == 0)
		return split_string;

        while( found != (int)xstring::npos)
        {
                found = (hay_string.substr(start_index)).find(needle);
                if( found != (int)xstring::npos )
                {
                        item = hay_string.substr(start_index, found);
                        start_index += found + delim_size;
                        if(item.size() >0)
                                split_string.push_back(item);
                }
                else
                {
                        item = hay_string.substr(start_index, found);
                        split_string.push_back(item);
                }
        }

  return split_string;
}

vector<xstring> xsplit(const xstring &hay_string)
{
	return xsplit(hay_string, xstring(" "));
}

