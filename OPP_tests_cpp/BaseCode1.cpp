#include <iostream>
#include <list>
using namespace std;

class animal {
private:
	string Owner;
	int Age;
	list<string> Parents;
protected:
	string Name;
	int TrainingQuality;

public:
	animal(string name,string owner) {
		Name = name;
		Owner = owner;
		Age = 0;
		TrainingQuality = 0; 
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

	void CheckAnalytics() {
		if (TrainingQuality < 5)
			cout << Name << " need more training sessions!" << endl;
		else
			cout << Name << " Is getting better at training" << endl;
	}
};

class dog :public animal {
public:
	dog(string Name, string Owner) : animal(Name, Owner) {
	}
	void TrainingIncrement() {
		cout << Name << "have trained " << "1" << " more time the fallow action: " << "bark" << "..." << endl;
			TrainingQuality++;
	}
};
class cat :public animal{
public:
	cat(string Name, string Owner):animal(Name,Owner){
	}
	void TrainingIncrement() {
		cout << Name <<"have trained "<<"1"<<" more time the fallow action: " << "meow"<< "..." << endl;
			TrainingQuality++;
	}

};


int main()
{
	dog dog1("jamelao","zoberson");
	dog dog2("jame", "zob");
	cat cat1("jujuba", "jucuba");

	dog1.TrainingIncrement();
	dog1.TrainingIncrement();
	dog1.TrainingIncrement();
	dog1.TrainingIncrement();
	dog1.TrainingIncrement();
	dog1.TrainingIncrement();

	dog2.TrainingIncrement();
	dog2.TrainingIncrement();

	dog* dg = &dog1;
	dog* dg2 = &dog2;

	dg->CheckAnalytics();
	dg2->CheckAnalytics();


};