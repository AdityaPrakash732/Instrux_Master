#pragma once

#include <iostream>
#include <string>

namespace Instrux
{
using value_t = int; // Define value_t as an alias for int (or another appropriate type)

class Console
{
public:
	Console();
	void StartWin();
	void StartLinux();
	void StartMac();
	value_t GetChar();
	~Console();

private:

};

}