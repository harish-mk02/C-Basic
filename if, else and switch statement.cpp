#include<iostream>
using namespace std;
int main(){
    if(0){//skip the line if it is false  //not only condition but also boolean - know as expression //should have expression
    cout<<"0";//can have bodyless if block in our program //if no set braces first line will be taken into if block
    //token less if is impossible
    cout<<"\n1";
    }
    
    else//dependent on if (error: ‘else’ without a previous ‘if’)
    //if apply token after else (else() //dependent on if (error: ‘else’ without a previous ‘if’))
    
    {
        cout<<"\n09";
        cout<<"\n99\n";
    }
    int a;
    cin>>a;
    switch(a){  
        case 1:cout<<"one"; //break is for the smooth flow of switch
        break;
        case 2:cout<<"2"; //duplicate cases are not allowed
        break;
        case 3:cout<<"3";
        break;
        default:
        cout<<"n";
        break;  //not to have break for default statement
    }
        return 0;
}
