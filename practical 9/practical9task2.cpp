#include<string>
#include<iostream>
using namespace std;

class Student{
string name;
int rollno;
long phn;
string address;
public:
Student(string name,int rn,long ph,string addr)
{
this->name=name;
this->rollno=rn;
this->phn=ph;
this->address=addr;
}
void print(){
cout<<"name :"<<this->name<<endl;
cout<<"roll number :"<<this->rollno<<endl;
cout<<"phone number :"<<this->phn<<endl;
cout<<"address :"<<this->address<<endl;
}

};
int main(){
Student s1("sam",15,8988498934,"21/2 ramnagar");
Student s2("john",10,9023341231,"453 patel nagar");
s1.print();
s2.print();
return 0;

}

