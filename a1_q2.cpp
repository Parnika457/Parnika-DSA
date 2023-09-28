#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks of student\n";
    cin>>n;
    if (n>90){
        cout<<"excellent \n";
    }
    if (n>80&&n<=90){
        cout<<"good \n";
    }
    if (n>70&&n<=80){
        cout<<"fair \n";
    }
    if (n>60&&n<=70){
        cout<<"meet expectations \n";
    }
    if (n<60){
        cout<<"below par \n";
    }

}
