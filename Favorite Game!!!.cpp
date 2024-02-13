#include<iostream>
using namespace std;
int main(){
    string a;
  
    string c;
    cout<<"Name:";
    getline (cin,a);
    
    cout<<"\nGame:";
    getline (cin,c);
    cout<<"\nMy name is "<<a<<" and I love to play "<<c<<"\n";
 
    return 0;
}
