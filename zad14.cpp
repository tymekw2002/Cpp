#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int g = stoi(argv[1]);
	int h = stoi(argv[2]);

	for(int i = 0; h>i ; i++) {
		for(int j = 0; g > j ; j++) {

			if(i==0 || (i+1)==h || j==0 || (j+1)==g)
				cout << "*";
				else
				{
					cout<<" ";
				}
				
		}
		cout<<"\n";
		
	}
}