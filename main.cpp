#include "human.h"
#include "student.h"
#include "teacher.h"
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "rus");
	vector<int> scores;	
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
	cout << "Средний балл: " << stud->get_average_scores() << endl << endl;

	vector<string> subjects;
	subjects.push_back("Математика");
	subjects.push_back("Дискретная математика");
	subjects.push_back("Теория вероятностей");
	subjects.push_back("Высшая математика");
	subjects.push_back("Теория графов");
	
	teacher *teach = new teacher("Иванов", "Иван", "Иванович", subjects);
	cout << teach->get_full_name() << endl;
	cout << "Преподаваемые дисциплины:" << endl;
	teach->get_subjects();
	
	system("pause");
	return 0;
}
