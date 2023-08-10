#include<iostream>
using namespace std;

string subjectGrades(int marks){

  // switch (marks/10)
  // {
  // case 9: return "A+"; break;
  // case 8: return "A"; break;
  // case 7: return "B"; break;
  // case 6: return "C"; break;
  // case 5: return "D"; break;
  // case 4; return "F"; break;
  // default:
  //   break;
  // }
  if(marks>90 && marks<100){
    return "A+";
  }
  else if(marks>80 && marks<90){
    return "A";
  }
  else if(marks>70 && marks<80){
    return "B";
  }
  else if(marks>50 && marks<70){
    return "C";
  }
  else if(marks>=33 && marks<50){
    return "D";
  }
  else{
    return "F";
  }
}

int main(){
  int marks;
  cout<<"Enter subject marks: ";
  cin>>marks;
  string Grade;
  Grade=subjectGrades(marks);

  cout<<"The Grade is: "<<Grade;
}