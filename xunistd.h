#ifndef __XUNISTD_H__
#define __XUNISTD_H__

#include <unistd.h>
#include <xstring.h>

int xaccess(const xstring &str, int mode);

#endif
