// clewTest.cpp : Defines the entry point for the console application.
//

#include "clew.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
#ifdef __APPLE__
const char* cl = "/System/Library/Frameworks/OpenCL.framework/Versions/Current/OpenCL";
#else
	const char* cl = "libOpenCL.so.1";
	const char* cl2 = "libOpenCL.so";
	const char* idc = "/etc/OpenCL/vendors/amdocl32.icd";
#endif
	int result = clewInit(cl);
	if (result!=CLEW_SUCCESS)
		printf("clewInit failed with error code %d\n",result);
	else
		printf("clewInit succesfull using %s\n",cl);
	return 0;
}

