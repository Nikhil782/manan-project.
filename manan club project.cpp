#include<iostream>
using namespace std;
int main()
{
string x;
char YN;
cout<<"Hi WELCOME YOU TO JOY OF PROGRAMMING"<<endl<<endl<<"Enter your Name:";
cin>>x;
cout<<"Hi "<<x<<endl<<endl<<"What you would like to do?"<<endl;
do
{

cout<<"1.Want to see different Patterns"<<endl<<"2.want to use calculator"<<endl<<"3.Want to get a table of a number"<<endl<<"4.want to get a factorial of a number:"<<endl;
int choice,y;
double p,z;
cout<<"Enter Your Choice:";
cin>>choice;
switch(choice)
{
case 4:
    {
   int a;
long long int i;
cout<<"enter the number which u want to get factorial";
cin>>a;
i=1;
while(a>1)
{
i=a*i;
a--;
}
cout<<i;
cout<<endl<<"Do You want to continue:"<<endl<<"Press Y for YES"<<endl<<"Press N for NO"<<endl<<"Enter your choice:";
    cin>>YN;
        if (YN=='y')
        cout<<endl<<endl<<"------SELECT AGAIN------"<<endl<<endl;
    }
    break;
case 2:
    {
    cout<<endl<<"select among the following operations which you would like to do"<<endl;
    cout<<"1.Multiplication"<<endl<<"2.Division"<<endl<<"3.Addition"<<endl<<"4.Subtraction"<<endl<<"Enter your Choice:";
    cin>>y;
    if(y==1)
    {
        cout<<"Enter two numbers";
        cin>>p>>z;
        cout<<endl<<"So "<<p<<"*"<<z<<"is"<<p*z;
    }
    if(y==2)
    {
        cout<<"Enter two numbers";
        cin>>p>>z;
        cout<<endl<<"So "<<p<<"/"<<z<<"is"<<p/z;}

        if(y==3)
    {
        cout<<"Enter two numbers";
        cin>>p>>z;
        cout<<endl<<"So "<<p<<"+"<<z<<"is"<<p+z;
    }

    if(y==4)
    {
        cout<<"Enter two numbers";
        cin>>p>>z;
        cout<<endl<<"So "<<p<<"-"<<z<<"is"<<p-z;
    }
    cout<<endl<<"Do You want to continue:"<<endl<<"Press Y for YES"<<endl<<"Press N for NO"<<endl<<"Enter your choice:";
    cin>>YN;
        if (YN=='y')
        cout<<endl<<endl<<"------SELECT AGAIN------"<<endl<<endl;}
 break;
case 3:
    {
        int no,table=1;
     cout<<"enter the number of what you want a table:";cin>>no;cout<<endl<<"Table of"<<no<<"is"<<endl;

        while(table<=10)
           {
            cout<<no*table<<endl;
        table++;}
    cout<<endl<<"Do You want to continue:"<<endl<<"Press Y for YES"<<endl<<"Press N for NO"<<endl<<"Enter your choice:";
    cin>>YN;
    if (YN=='y')
        cout<<endl<<endl<<"------SELECT AGAIN------"<<endl<<endl;

    }
    break;
case 1:
{


        int pattern;
        cout<<"Pattern 1"<<endl<<"Pattern 2"<<endl<<"Pattern 3"<<endl<<"Pattern 4"<<endl<<"Pattern 5"<<endl<<endl<<"Select your choice:";cin>>pattern;
        cout<<endl;

        //PATTERN 1:
        if(pattern==1)
{

for(int i=1;i<=9;i++)
 {
  for(int j=1;j<=5;j++)
  {
  if(i<=5)
   {
    if(j<=i)
    {cout<<"*";}
    else
    {cout<<" ";}
   }
   else
   {
    if(j<=10-i)
    cout<<"*";
    else
    cout<<" ";
   }
  }
  cout<<endl;
 }

    }
    //PATTERN 2
    if(pattern==2)
    {
        for(int i=1;i<=7;i++)
{
   for(int j=1;j<=7;j++)
   {
   if(i<=4)
   {j>=5-i&&j<=3+i?cout<<"*":cout<<" ";}
   else
   j>=i-3&&j<=11-i?cout<<"*":cout<<" ";
   }
   cout<<endl;
   }
    }
    //PATTERN 3
    if(pattern==3)
    {
        for(int i=1;i<=5;i++)
{
for(int j=1;j<=9;j++)
 {
  if(j>=6-i&&j<=4+i)
   cout<<"*";
   else
   {cout<<" ";}
 }
 cout<<endl;
}
    }

    //PATTERN 4
    if(pattern==4)
    {
        for(int i=1;i<=5;i++)
{
 for(int j=1;j<=9;j++)
 {
  if(j<=6-i||j>=4+i)
  {cout<<"*";}
  else
  {cout<<" ";}
 }
 cout<<endl;
}
    }
    //PATTERN 5
    if(pattern==5)
    {
        for(int i=1;i<=4;i++)
{
    int k=1;
  for(int j=1;j<=7;j++)
  {
  if(j>=5-i&&j<=3+i)
   {cout<<k;

   j<4?k++:k--;}
  else
  cout<<" ";
  }
  cout<<endl;
    }
    }
      cout<<endl<<"Do You want to continue:"<<endl<<"Press Y for YES"<<endl<<"Press N for NO"<<endl<<"Enter your choice:";
    cin>>YN;
    if (YN=='y')
        cout<<endl<<endl<<"------SELECT AGAIN------"<<endl;
}
break;

default:
    {
        cout<<"invalid choice";
        cout<<endl<<"Do You want to continue:"<<endl<<"Press Y for YES"<<endl<<"Press N for NO"<<endl<<"Enter your choice:";
    cin>>YN;
    if (YN=='y'
        )
        cout<<endl<<endl<<"------SELECT AGAIN------"<<endl<<endl;
    }

}
}

while(YN=='y');
return(0);
}
