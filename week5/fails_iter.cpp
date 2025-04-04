// fails_iter.cpp �ݺ��� ���
#include <vector>
#include "student_info.h"
#include "grade.h"

using std::vector;

// 1��° ���� �л��� �����ϴ� �л� ������
// �ε��� ��� �ݺ��� ����ϱ� (������ ����)
vector<Student_info> extract_fails(vector<Student_info>& students) {
	vector<Student_info> fail;
	vector<Student_info>::iterator iter = students.begin();

	while (iter != students.end()) {
		if (fgrade(*iter)) {
			fail.push_back(*iter);
			// ���� ���� i �ε����� �ִ� �л� �����ϱ�
			iter = students.erase(iter);
		}
		else {
			++iter;
		}
	}

	return fail;
}