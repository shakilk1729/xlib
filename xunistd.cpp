#include <xunistd.h>

int xaccess(const xstring &str, int mode)
{
	return access(str.c_str(), mode);
}
