#include<iostream>
#include<cstring>
//file has been chaged
using namespace std;
class student{
private:
int rollno;
char name[20];
char course[20];
public:
student();
student(int,char*,char*);
~student();
void accept(void);
void display(void);
};
student::student(int r,char* n,char* c){
rollno=r;
strcpy (name,n);
strcpy(course,c);
}
student::student(){
cout<<"chutiya";
}
student::~student(){
cout<<"tuzi aai ghal aatta lavdya";
}
void student::accept(){
cout<<"\n enter the student name"<<endl;
cin>> name;
cout<<"\n enter the student roll no:"<<endl;
cin>>rollno;
cout<<"\n enter the course"<<endl;
cin>>course;
}
 void student::display(){
cout<<"student name is="<<name<<endl;
cout<<"roll no:"<< rollno<<endl;
cout<<"course:"<<course<<endl;
}

int main()
{
int size,i;
cout<<"enter the number of student";
cin>>size;
student *arr=new student[size];

for(i=0;i<size;i++){

arr[i].accept();
}
for(i=0;i<size;i++){
    arr[i].display();
}

    student a(123,"gyan","dac");
    a.display();
student a1;
a1.accept();
a1.display();
return 0;
}
