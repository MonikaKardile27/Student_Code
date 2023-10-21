#include<iostream>
#include<string>
using namespace std;

class Student{
	
	private:
		int studid;
		string studname;
		float marks1,marks2,marks3,total;
		char per;
	public:
		Student();
		Student(int studid,string studname,float marks1,float marks2,float marks3);
		
		int getStudid();
		string getStudname();
		float getMarks1();
		float getMarks2();
		float getMarks3();
		
		void setStudid(int studid);
		void setStudname(string studname);
		void setMarks1(float marks1);
     	void setMarks2(float marks2);
		void setMarks3(float marks3);
		
		void accept();
		void display();
		
};
