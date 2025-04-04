// fails_list.cpp �ݺ��� ��� (����Ʈ �����̳�)
#include <list>
#include "student_info.h"
#include "grade.h"

using std::list;

// 1��° ���� �л��� �����ϴ� �л� ������
// �ε��� ��� �ݺ��� ����ϱ� (������ ����)
list<Student_info> extract_fails(list<Student_info>& students) {
	list<Student_info> fail;
	list<Student_info>::iterator iter = students.begin();

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