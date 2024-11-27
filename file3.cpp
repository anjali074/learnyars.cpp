#include<iostream>
using namespace std;

int main(){
  //input marks of 5 student and print the avg marks
  //give all of them grace marking incerease the their marks by 5%
float markstudent[5];
 for(int i=0; i<5; i++){
    cin>>markstudent[i];
  }
  float sum=0;
  for(int i=0; i<5; i++){
    markstudent[i]=markstudent[i]*5/100;
    cout<<markstudent[i];
    sum+=markstudent[i];
    
  }
  cout<<sum/5;

return 0;

}
