#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{ string stdName[5];
  int index_number[5];
  int student_age[5];
  char Student_gender[5];
  double student_Score[5];
  char student_grade[5];

  cout<<"Input the students names respectively and press enter"<<endl;

for(int i=0;i<=4;i++){
cin>>stdName[i];
cout<<"Input the students ID numbers respectively"<<endl;}

for(int k=0;k<=4;k++){
cin>>index_number[k];
cout<<"Input the ages of the students respectively"<<endl;}

for(int l=0;l<=4;l++){
cin>>student_age[l];
cout<<"Input their genders respectively"<<endl;}
for(int m=0;m<=4;m++){
cin>>Student_gender[m];
cout<<"Input their scores respectively"<<endl;}
for(int n=0;n<=4;n++){
cin>>student_Score[n];
cout<<"input their grades respectively"<<endl;}
for(int o=0;o<=4;o++){
cin>>student_grade[o];}
//output into file
ofstream std;
std.open("STUDENT.txt");
std<<"ID number"<<"\tName"<<"\tAge"<<"\tGender"<<"\tScore"<<"\tGrade"<<endl;
for(int i=0;i<=4;i++)
    std<<index_number[i]<<"\t\t"<<stdName[i]<<"\t"<<student_age[i]<<"\t"<<Student_gender[i]<<"\t"<<student_Score[i]<<"\t"<<student_grade[i]<<endl;
return 0;
}




