#include<iostream>
Using namespace std;
struct patient{
string name;
int age;
string diagnosis;
};
void displaypatients(const patient & p){
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
}
int main() {
patient P1={"Mary",30,"malaria"};
patient p2={"John",45,"pneumonia"};

 displaypatients();
  patient(P1);
  patient (p2);
  
  cout<<"Patient 1"<<end1;
  cout<<"Name:"<<P1.name<<end1;
    cout << "Age: " << P1.age << end1;
    cout << "Diagnosis: " << P1.diagnosis << end1;
    
    cout<<"Patient 2"<<end1;
    cout << "Name: " << p2.name << end1;
    cout << "Age: " << p2.age << end1;
    cout << "Diagnosis: " << p2.diagnosis << end1;
    
    return 0;
    
 }   