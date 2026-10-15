#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
   string name;
   int id;
   string department;
   int mark1,mark2,mark3;
   int total;
   int average;
   int grade;

void input(string a,int b,string c,int d,int e,int f)
{
  name=a;
  id=b;
  department=c;
  mark1=d;
  mark2=e;
  mark3=f;
}
void calculateresult()
{
    total=mark1+mark2+mark3;
    average=total/3;
}
void display()
{
    cout<<name<<id<<department<<endl;
    if (average >= 80)
    {
        cout<<"A+";
    }
    else if (average >= 70){
        cout<< "A"<<endl;}
    else if (average >= 60)
    {
         cout<<"A-"<<endl;
    }
    else if (average >= 50)
    {
         cout<< "B"<<endl;
        }
    else if (average >= 40)
    {
         cout<< "C"<<endl; 
        }
    else{
         cout<< "F"<< endl;
    }
}


};
int main()
{
    student s1;
 string m;
 int n;
 string o;
 int p,q,r;
 cin>>m>>n>>o>>p>>q>>r;
 s1.input(m,n,o,p,q,r);
 s1.calculateresult();
 s1.display();


}