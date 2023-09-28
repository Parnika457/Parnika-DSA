#include <iostream>

using namespace std;

int main(){
    int i;
    cout<<"enter the number which you want to reverse: ",i;
    cin>>i;
    int reverse=0;
    while(i>0){
    int lastdigit=i%10;
 
    reverse=reverse*10 + lastdigit;
    i=i/10;
    }
    cout<<"the reverse number is :"<<reverse<<endl;
    return 0;
}
