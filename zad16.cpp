#include <iostream>

using namespace std;

	int main(int argc, char** argv)
	{
		int w = stoi(argv[1]);
		
		for(int i = 0; i < w; i++)
		{
			for(int j = 0; j < i+1; j++)
			{
				cout<< "*";
			}
			cout<< "\n";
		}
	}
