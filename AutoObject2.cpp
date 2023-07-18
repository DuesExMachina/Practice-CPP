#include<iostream>

using namespace std;
class student{
public:
int roll;
string name;
};

void main(){
 student obj[]={{1,"arun"},{2,"rahul"},{}};

  for(auto a:obj){
  cout<<a.name<<'\t';
  }
}
