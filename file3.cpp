#include<iostream>
using namespace std;

int main(){
  //input marks of 5 student and print the avg marks
float markstudent[5];
 for(int i=0; i<5; i++){
    cin>>markstudent[i];
  }
  float sum=0;
  for(int i=0; i<5; i++){
    sum+=markstudent[i];
    
  }
  cout<<sum/5;

return 0;

}
