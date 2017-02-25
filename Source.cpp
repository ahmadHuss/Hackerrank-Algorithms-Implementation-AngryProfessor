#include <vector>
#include <iostream>

using namespace std;

int main(){
   	int testcase;

	cin >> testcase;

	for (int i = 0; i < testcase; i++) {


		int students;
		int studentsNotOnTime;
		int countstudentsOnTime = 0;

		cin >> students >> studentsNotOnTime;


		vector<int> timeofAllStudents(students);
		for (int j = 0; j < students; j++) {
			cin >> timeofAllStudents[i];
			if (timeofAllStudents[i] <= 0) {
				countstudentsOnTime++;//
			}

			
			
		}

		if (countstudentsOnTime >= studentsNotOnTime) {
			cout << "NO" << endl;

		}
		else {
			cout << "YES" << endl;
		}





	}
    
    return 0;
}