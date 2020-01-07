

#include<iostream>

using namespace std;

class Student
{  //int avg=0;
    int n;
    int rollNo;
    int marks;
    string name;

public :

    
    static int count, max,min,abcnt;

    void getdata();
    void printdata();
    void avgdata();
    int getmarks();
    void display();

};
int Student :: count=0;
int Student :: max=0;
int Student :: min=30;
int Student :: abcnt=0;



void Student :: getdata()
{
    cout<<"\nEnter The rollNo\n";
    cin>>rollNo;
    cout<<"\nEnter The Name\n";
    cin>>name;
    cout<<"\nEnter The Marks\n";
    cin>>marks;
    if(marks<0)
    	Student :: abcnt++;
    else
    {
    	if(Student :: max<marks)
    		Student :: max=marks;
    	if(Student :: min>marks)
    		Student :: min=marks;
    }

    Student :: count++;


};

//int Student :: getmarks()
//{
//    return marks;
//}
void Student::printdata()
{
    cout<<"\nRoll No,:"<<rollNo;
    cout<<"\tName.:    "<<name;
    cout<<"\tMarks.:    "<<marks;
    cout<<"\n"<<Student::count;

};

void Student::display()
{
    cout<<"The Count is,:"<<Student::count;
    cout<<"\nMaximum Score:"<<Student :: max;
    cout<<"\nMinimum Score:"<<Student :: min;
    cout<<"\nAbsent Count :"<<Student :: abcnt;
}
//void Student :: avgdata()
//{

//}
int main()
{
    int n;
    //cout<<"Enter no of records";
    //cin>>n;
    Student s[10];
    Student s1;


    for(int i=0;i<10;i++)
    {
        s[i].getdata();
        //Student :: count++;

    }

    for(int i=0;i<10;i++)
        {
            s[i].printdata();

        }
s1.display();


return 0;


}
