#include <iostream>

using namespace std;

int main(int argc, char** argv)
	{
		int max_g = stoi(argv[1]);
		
		for(int i=0; max_g>i; i++)
		{
			cout<<"*";

			for(int j=max_g; j>max_g; j--)
			{
				cout<<"*";
			}
			cout <<"\n";
		}
			
	}