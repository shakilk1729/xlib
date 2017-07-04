#include <iostream>
#include <string>

using namespace std;

string xstrstr(const string &haystack, const string &needle)
{
	size_t pos = haystack.find(needle);
	if (pos != std::string::npos)
		return haystack.substr(pos);
	return string("");
}

void xtoupper(string &s)
{
	std::transform(s.begin(),s.end(), s.begin(), ::toupper);
}

void xtolower(string &s)
{
	std::transform(s.begin(),s.end(), s.begin(), ::tolower);
}

string xstrcasestr(const string &haystack, const string &needle)
{
	string lhaystack(haystack);
	string lneedle(needle);

	xtolower(lhaystack);
	xtolower(lneedle);

	size_t pos = lhaystack.find(lneedle);
	if (pos != std::string::npos)
		return haystack.substr(pos);
	return string("");
}

int main()
{
	string s = "Hey there whats up. we ill try to search in this";
	string needle = "whats";

	cout << xstrstr(s, needle)<<endl;

	xtoupper(s);
	cout <<s<<endl;

	cout << xstrcasestr(s, needle)<<endl;
}
