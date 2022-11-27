#include <iostream>
#include <list>
using namespace std;

class reallifeobj {
private:
	string Name;
	string Owner;
	int Age;
	list<string> Parents;

public:
	reallifeobj() {
		Name = "";
		Owner = "";
		Age = 0;

	}

	void Getdata() {
		cout << "------------------------------" << endl;
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Owner: " << Owner << endl;
		cout << "Parents: " << endl;
		for (string parentss : Parents) {
			cout << parentss << endl;
		}
		cout << "------------------------------" << endl;
	}

	void Addage() {
		Age++;
	}
	void Subage() {
		if (Age > 0)
			Age--;
	}

	void AddParent(string parentname) {
		Parents.push_back(parentname);
	}
	void RemoveParent(string parentname) {
		Parents.remove(parentname);
	}

	string Getname() {
		return Name;
	}
	void Setname(string newname) {
		Name = newname;

	}

	string Getowner() {
		return Owner;
	};
	void Setowner(string newowner) {
		Owner = newowner;
	};
};

int main()
{
	reallifeobj lifeobj;

	lifeobj.Subage();
	/*---------------------*/

	cout << "Nome Antigo: " << lifeobj.Getname() << endl;
	lifeobj.Setname("Ameno");

	/*---------------------*/

	cout << "" << lifeobj.Getowner();
	lifeobj.Setowner("beaba");

	/*---------------------*/
	lifeobj.AddParent("mane");
	lifeobj.AddParent("Jane");
	lifeobj.RemoveParent("mane");

	lifeobj.Getdata();
};
