#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	map<int, string> mapStudents;
	mapStudents.insert(pair<int,string>(1,"student_one"));
	mapStudents.insert(pair<int,string>(2,"student_two"));
	mapStudents.insert(pair<int,string>(3,"student_three"));

	mapStudents.insert(map<int,string>::value_type(4,"student_four"));
	mapStudents.insert(map<int,string>::value_type(5, "student_five"));
	mapStudents.insert(map<int,string>::value_type(6, "student_six"));

	mapStudents[7] = "student_seven";
	mapStudents[8] = "student_eight";

	map<int,string>::iterator iter;
	for (iter = mapStudents.begin(); iter!=mapStudents.end(); iter++)
	{
		cout<<iter->first<<"------"<<iter->second<<endl;
	}
	getchar();

	return 0;
}