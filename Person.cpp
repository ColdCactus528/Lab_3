#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::to_string;

class Person {
public:

	Person() {

	}

	Person(int ser, int num, string s_0, string s_1, string s_2, string s_3) {
		id.series = ser;
		id.number = num;
		FirstName = s_0;
		MiddleName = s_1;
		LastName = s_2;
		BirthDate = s_3;
	}

	void Set_PersonID(int ser, int num) {
		id.series = ser;
		id.number = num;
	}
	void Set_FirstName(string line) {
		FirstName = line;
	}

	void Set_MiddleName(string line) {
		MiddleName = line;
	}

	void Set_LastName(string line) {
		LastName = line;
	}

	void Set_BirthDate(string line) {
		BirthDate = line;
	}

	string Get_FirstName() {
		return FirstName;
	}

	string Get_MiddleName() {
		return MiddleName;
	}

	string Get_LastName() {
		return LastName;
	}

	string Get_BirthDate() {
		return BirthDate;
	}

	int Get_PersonID_series() {
		return id.series;
	}

	int Get_PersonID_number() {
		return id.number;
	}

	bool operator>(Person hum) {
		if ((id.series > hum.id.series) || ((id.series == hum.id.series) && (id.number > hum.id.number))) {
			return true;
		} else {
			return false;
		}
	}

	bool operator==(Person hum) {
		if ((id == hum.id) && (FirstName == hum.FirstName) && (MiddleName == hum.MiddleName) && (LastName == hum.LastName) && (BirthDate == hum.BirthDate)) {
			return true;
		} else {
			return false;
		}
	}

	friend std::ostream& operator<< (std::ostream &out, const Person &hum) {
		out << "PersonID(series: " << hum.id.series << ", number: " << hum.id.number << "), FirstName: " << hum.FirstName << ", MiddleName: " << hum.MiddleName << ", LastName: " << hum.LastName << ", BirthDate: " << hum.BirthDate;
		return out;
	}

	friend std::string to_string(Person const& hum) {
		return "PersonID(series: " + to_string(hum.id.series) + ", number: " + to_string(hum.id.number) + "), FirstName: " + hum.FirstName + ", MiddleName: " + hum.MiddleName + ", LastName: " + hum.LastName + ", BirthDate: " + hum.BirthDate;
	}

	~Person() {

	}
private:
	struct PersonID {
		int series;
		int number;

	bool operator==(PersonID id) {
		if ((series == id.series) && (number == id.number)) {
			return true;
		} else {
			return false;
		}
	}
	};

	PersonID id;
	string FirstName;
	string MiddleName;
	string LastName;
	string BirthDate;

};
