#include "human.h"
#include "student.h"
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	vector<int> scores;
	setlocale(LC_ALL, "rus");
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(2);
	scores.push_back(2);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student *stud = new student("Петров", "Петр", "Петрович", scores);
	cout << stud->get_full_name() << endl;
	cout << "Средний балл: " << stud->get_average_scores() << endl;

	system("pause");
	return 0;
}
