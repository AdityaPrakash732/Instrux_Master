
#include "../Headers/Console.h"

namespace Instrux
{
	// Console class implementation
	Console::Console()
	{
		std::cout << ">> ";
		GetChar();
#if _WIN32 || _WIN64
		StartWin();
#endif // _WINDOWS
#if __linux__
		StartLinux();
#endif // __linux__
#if __APPLE__
		StartMac();
#endif
	}

	void Console::StartWin()
	{
		system("cls");
		std::cout << ">> ";
		GetChar();
	}

	void Console::StartLinux()
	{
		std::cout << "\033[2J\033[H";
		std::cout << ">> ";
		GetChar();
	}

	void Console::StartMac()
	{
		std::cout << "\033[2J\033[H";
		std::cout << ">> " ;
		GetChar();
	}

	value_t Console::GetChar()
	{
		value_t val;
		std::cin >> val;
		return val;
	}	

	Console::~Console()
	{
	}
} // namespace Instrux
