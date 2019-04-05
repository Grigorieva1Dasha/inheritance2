#pragma once
#include "human.h"
#include <string>
#include <vector>

using namespace std;

class teacher : public human {
public:
	teacher(string last_name, string name, string second_name, vector<string> subjects) : human(last_name, name, second_name) {
		this->subjects = subjects;
	}
	void get_subjects() {
		unsigned int count_sub = this->subjects.size();
		for (unsigned int i = 0; i < count_sub; i++) {
			cout << i + 1 << ")" << subjects[i] << endl;
		}
	}
private:
	vector<string> subjects;
};
