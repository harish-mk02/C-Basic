#include <iostream>
using namespace std;
int main(){
    string a;
    string g;
    int b;
    int c;
    
    int e,f;
    cout<<"Team 1:\n";
    cout<<"Team Name:\n";
    getline (cin,a);
    cout<<"Score:\n";
    cin>>b;
    cout<<"Overs played:\n";
    cin>>c;
    cout<<"Team 2:\n";
    cout<<"Team Name:\n";
    cin.ignore();
    getline (cin,g);
    cout<<"Score:\n";
    cin>>e;
    cout<<"Overs played:\n";
    cin>>f;
    cout<<"Match Details:\nTeam 1:\nName: "<<a<<"\nScore: "<<b<<"\nOvers played: "<<c<<"\nTeam 2:\nName: "<<g<<"\nScore: "<<e<<"\nOvers played: "<<f;
    return 0;
    
    
}
