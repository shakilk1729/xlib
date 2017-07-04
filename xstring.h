#ifndef __XSTRING_H__
#define __XSTRING_H__

#include <string>
using namespace std;

#define xstring string

#define MIN(a,b) ((a) > (b)) ? (b) : (a)

void xstrcpy(xstring &dest, const xstring &src);
void xstrcpy(xstring &dest, const xstring &src, size_t len);
vector<xstring> xsplit(const xstring &hay_string, const xstring &needle);
vector<xstring> xsplit(const xstring &hay_string);
string xstrstr(const xstring &haystack, const xstring &needle);
void xtoupper(xstring &s);
void xtolower(xstring &s);
string xstrcasestr(const xstring &haystack, const xstring &needle);

#endif
