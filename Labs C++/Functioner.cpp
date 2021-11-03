#include <iostream>
#include <string.h>

using namespace std;

bool Hitta(int hitta[], int size, int searchitm);

int main()
{
	int x,y;
	int hitta[] = { 10,30,20,80,40 };
	cout << "hitta ett nummer: ";
	cin >> x;
	if (Hitta(hitta, 5, x) == true)
	{
		for (int i = 0; i < 5; i++)
		{
			if (hitta[i] == x)
				y = i;			
		}
		cout << x << " its found at index:  " << y << endl;
	}

	else
		cout << x << " its not found " << endl;
}

bool Hitta(int hitta[], int size, int searchitm)
{

	bool found = false;

	for (int i = 0; i < size; i++)
	{
		if (hitta[i] == searchitm)
			found = true;
	}
	return found;

}

