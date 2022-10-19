#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	for(int i=1; argc>i; i++)
		{
			char *temp = argv[i];
			cout<< temp <<" ";
		}
}