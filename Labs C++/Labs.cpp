#include <iostream>
#include <string.h>

using namespace std;

struct student
{
	int age;
	float weight;
	int length;
	string name;
	int person_nr;
	string jobb;

	void PrintStruct() // funktion som räknar när man går i pension
	{
		cout << name << " gar i pension om: "<< 65 - age << endl;
	}

};
int main()
{
      int size = 0;
      student List[6];
      cout << "Enter antal studenter: ";
      cin >> size;

      for (int i = 0; i < size; i++)
      {
        
        cout << "enter Student name: ";
        cin >> List[i].name;
        cout << "enter Student age: ";
        cin >> List[i].age;
        cout << "enter Student weight : ";
        cin >> List[i].weight;
        cout << "enter Student length: ";
        cin >> List[i].length;
        cout << "enter Student person_nr: ";
        cin >> List[i].person_nr;
        cout << "enter Student jobb: ";
        cin >> List[i].jobb;

      }

      for (int i = 0; i < size; i++)
      {
        List[i].PrintStruct();
      }

      return 0;

}
