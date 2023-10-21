#include "Student.h"



	Student::Student()
	{
		studid=1;
		studname="Abc";
		marks1=90;
		marks2=75;
		marks3=89;
	}
	Student::Student(int studid,string studname,float marks1,float marks2,float marks3)
	{
		this->studid=studid;
		this->studname=studname;
		this->marks1=marks1;
		this->marks2=marks2;
		this->marks3=marks3;
	}
		
		int Student::getStudid()
		{
			return studid;
		}
		string Student::getStudname()
		{
			return studname;
		}
		float Student:: getMarks1()
		{
			return marks1;
		}
		float Student:: getMarks2()
			{
			return marks2;
		}
		float Student::getMarks3()
			{
			return marks3;
		}
		
		void Student::setStudid(int studid)
		{
			this->studid=studid;
		}
		void Student::setStudname(string studname)
		{
			this->studname=studname;
		}
		void Student::setMarks1(float marks1)
		{
			this->marks1=marks1;
		}
     	void Student::setMarks2(float marks2)
     	{
     		{
			this->marks2=marks2;
		}
		 }
		void Student::setMarks3(float marks3)
		{
			{
			this->marks3=marks3;
		}
		}
		
		void Student::accept()
		{
			cout<<"Enete id,name,marks1,marks2,marks3"<<endl;
			cin>>studid>>studname>>marks1>>marks2>>marks3;
			total=marks1+marks2+marks3;
			per= (total/300)*100;
		}
		void Student::display()
		{
			cout<<"Enete id"<<studid<<"  "<<"Name:"<<studname<< "  " <<"marks1"<<marks1<<"  "<<"marks2"<<marks2<<"  "<<"marks3"<<marks3<<endl;
		}
