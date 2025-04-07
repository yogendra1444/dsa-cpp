#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    int marks[n];
    cout<<"enter the marks of the students : ";

    //input
    for(int i=0; i<=6; i++){
        cin>>marks[i];

    }

   for(int i=0; i<=n; i++){
    if(marks[i]<35) cout<<i<<" ";

   }
}
