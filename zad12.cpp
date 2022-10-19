#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int w = stoi(argv[1]);
	int h = stoi(argv[2]);
	
	
	for(int j=0; h>j; j++)
	{
		cout<<""<<endl;
		for(int i=0; w>i; i++)
		{
			cout<<"*";
		}
	}
}