// fails_vec1.cpp
#include <vector>
#include "student_info.h"
#include "grade.h"

using std::vector;

// 1��° ���� �л��� �����ϴ� �л� ������ (�޸� ��뷮�� ŭ)
vector<Student_info> extract_fails(vector<Student_info>& students) {
	vector<Student_info> pass, fail;

	for (vector<Student_info>::size_type i = 0;
		i != students.size(); ++i) {
		if (fgrade(students[i])) {
			fail.push_back(students[i]);
		}
		else {
			pass.push_back(students[i]);
		}
	}

	students = pass; //���� �ִ� sutdents ���Ϳ��� pass �л��� ����
	return fail;
}