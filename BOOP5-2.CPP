#include<iostream.h>
#include<conio.h>
struct human{
char name[30];
int age;
char blood[14];
int w;
int h;
};
int main()
{
human s;
clrscr();
cout<<"GET DETAILS OF HUMANS:"<<endl;
cout<<"ENTER NAME:";
cin>>s.name;
cout<<"ENTER AGE:";
cin>>s.age;
cout<<"ENTER BLOOD GROUP:";
cin>>s.blood;
cout<<"ENTER WEIGTH:";
cin>>s.w;
cout<<"ENTER HEIGHT:";
cin>>s.h;
cout<<"PRINT DETAILS OD HUMANS:"<<endl;
cout<<"NAME="<<s.name<<endl;
cout<<"AGE="<<s.age<<endl;
cout<<"BLOOD GROUP="<<s.blood<<endl;
cout<<"WEGTH="<<s.w<<endl;
cout<<"HEGTH="<<s.h<<endl;
getch();
return 0;
}
