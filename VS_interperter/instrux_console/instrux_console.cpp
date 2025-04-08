// instrux_console.cpp : Defines the entry point for the application.
//

#include "instrux_console.h"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		Instrux::Console con;
	}
	else
	{
		cout << "Arguments provided: ";
		for (int i = 0; i < argc; ++i)
		{
			cout << argv[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
