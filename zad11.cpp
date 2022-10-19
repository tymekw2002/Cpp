#include <iostream>
#include <string>

using namespace std;

void binar(int liczba)
{
	int i = 0, tab[31];
	
		while(liczba)
		{
			tab[i++] = liczba%2;
			liczba /= 2;
		}

	
	for(int j = i-1; j >= 0; j--)
	cout << tab[j];
}

int main(int argc, char** argv)

{

	int liczba = stoi(argv[1]);
	binar(liczba);
	cout<<endl;

	return 0;
}