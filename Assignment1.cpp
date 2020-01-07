#include<iostream>
using namespace std;

class cstudent
{
private:
	int iM,irollno[30];
	string sname[30];
public:
	void fgetdata();
	void funistd(cstudent , cstudent);
	void fintstd(cstudent , cstudent);
	void fdiff(cstudent , cstudent);
//	void fdnt(int);
	void fdisplay();
};
void cstudent::fgetdata()
{
	cout<<"enter total number of students";
	cin>>iM;
	for(int i=0;i<iM;i++)
	{

	    cout<<"enter the roll number : ";
	    cin>>irollno[i];
	    cout<<"enter name of the student : ";
	    	    cin>>sname[i];
	}
}
void cstudent::fdisplay()
{

cout<<" count is "<<iM;
 cout<<"\n{";
 for(int i=0;i<iM;i++)
  {
   cout<<irollno[i]<<"-"<<sname[i];
      if(i!=iM-1)
      cout<<",";
  }
cout<<"}\n";
}
void cstudent::funistd(cstudent a, cstudent b)
{
int flag,count=0;
	for(int k=0;k<a.iM;k++)
	{
		irollno[k]=a.irollno[k];
		sname[k]=a.sname[k];
        count++;
    }
	for(int i=0;i<b.iM;i++)
	{
	   flag=0;
		for(int j=0;j<a.iM;j++)
		{
			if(b.irollno[i]==a.irollno[j])
			{
				flag=1;
				break;
			}
		}
			if(flag==0)
		    {
		    	irollno[count]=b.irollno[i];
		    	sname[count]=b.sname[i];
		    	count++;
		    }
	}
iM=count;
}
void cstudent::fintstd(cstudent x , cstudent y)
{
	int count=0;
	for(int i=0;i<y.iM;i++)
		{
		   int flag=0;
			for(int j=0;j<x.iM;j++)
			{
				if(y.irollno[i]==x.irollno[j])
				{
					flag=1;
					break;
				}
			}
				if(flag==1)
			    {
			    	irollno[count]=y.irollno[i];
			    	sname[count]=y.sname[i];
			    	count++;
			    }
		}
iM=count;
}
void cstudent::fdiff(cstudent c , cstudent d)
{
	int count=0;
	for(int i=0;i<c.iM;i++)
		{
		   int flag=0;
			for(int j=0;j<d.iM;j++)
			{
				if(c.irollno[i]==d.irollno[j])
				{
					flag=1;
					break;
				}
			}
				if(flag==0)
			    {
			    	irollno[count]=c.irollno[i];
			    	sname[count]=c.sname[i];
			    	count++;
			    }
		}
iM=count;
}
/*
void cstudent::fdnt(int n)
{
int dnt=0;
dnt=n-iM;
cout<<dnt;
}
*/
int main()
{
cstudent total, cricket,bm,uni,in,di;
int ch;
/*int n=0;
cout<<"Enter total number of students in SE comp : ";
cin>>n;
*/
do
{
cout<<"\n Select the operation";
cout<<"\n 1. To take input";
cout<<"\n 2. To display Set details";
cout<<"\n 3. Union";
cout<<"\n 4. Intersection";
cout<<"\n 5. Difference";
cout<<"\n 6. Dont Play \n";
cin>>ch;
switch(ch)

{
case 1:{

 cout<<"Enter total number of students in SE comp : \n";
 total.fgetdata();


cout<<"enter the details of students who play cricket\n";
cricket.fgetdata();

cout<<"enter the details of students who play Badminton\n";
bm.fgetdata();
break;
}


case 2:{
cout<<"Set of students in SE comp : ";
total.fdisplay();

cout<<"Set of students who play Cricket = ";
cricket.fdisplay();

cout<<"\nSet of students who play Badminton = ";
bm.fdisplay();

 break;
}

case 3: {

uni.funistd(cricket,bm);
cout<<"\nSet of students who play either cricket or Badminton or both = ";
uni.fdisplay();
break;
}


case 4:{
in.fintstd(cricket,bm);
cout<<"\nset of students who play both cricket and badminton = ";
in.fdisplay();
break;
}

case 5:
{
di.fdiff(cricket,bm);
cout<<"\nset of students who play only cricket = ";
di.fdisplay();

di.fdiff(bm,cricket);
cout<<"\nset of students who play only Badminton = ";
di.fdisplay();
break;
}
case 6:{

di.fdiff(total,uni);
cout<<"\nnumber of students who dont play anything = ";
di.fdisplay();

break;}
}
}while(ch<=6);
//uni.fdnt(n);
return 0;
}
