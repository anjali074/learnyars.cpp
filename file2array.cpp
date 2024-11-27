#include<iostream>
using namespace std;

int main(){
  int roll_number[5];//roll number is name of the array
  cout<<sizeof(roll_number)<<endl;
  for(int i=0; i<5; i++){
    cin>>roll_number[i];
  }
   for(int i=0; i<5; i++){
    cout<<roll_number[i]<<"  ";
   }
  return 0;
}