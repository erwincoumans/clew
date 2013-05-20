// clewTest.cpp : Defines the entry point for the console application.
//

#include "clew.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	const char* cl = "libOpenCL.so.1";
	const char* cl2 = "libOpenCL.so";
	const char* idc = "/etc/OpenCL/vendors/amdocl32.icd";
	int result = clewInit(cl);
	if (result!=CLEW_SUCCESS)
		printf("clewInit failed with error code %d\n",result);
	else
		printf("clewInit succesfull\n");
	return 0;
}

