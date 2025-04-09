
#include "../Headers/Console.h"

namespace Instrux
{
	Console::Console()
	{
		Print(">>");
	}

	Console::~Console()
	{
	}

	void Console::Print(const std::string& message)
	{
		std::cout << message << '\n';
	}
}