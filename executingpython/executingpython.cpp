// executingpython.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <shlobj.h>
#include <shlwapi.h>
#include <objbase.h>
#include <process.h>
#include <string>

int main()
{
	for (int i = 0; i < 5; i++) {
		std::string arg = "FWD00" + std::to_string(i);
		std::string command = "python send2esp.py ";
		std::string systemcommnad = command + arg;
		system(systemcommnad.c_str());
	}
    return 0;
}

