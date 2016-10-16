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

	map<int,string>::iterator iter;
	for (iter = mapStudents.begin(); iter!=mapStudents.end(); iter++)
	{
		cout<<iter->first<<"------"<<iter->second<<endl;
	}
	getchar();

	return 0;
}