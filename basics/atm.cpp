#include <iostream>
using namespace std;

int main(){
    const string pin="slynder375";
    string password;
    int trials=3;
    do
    {
        cout<<"enter the pin: ";
        cin>>password;
        if (password==pin){
            cout<<"ACCESS GRANTED"<<endl;
            return 0;
        }else{
            trials--;
            cout<<"ACCESS DENIED: "<<trials<<" trials remaining"<<endl;
        }
        if (trials==0){
            cout<<"out of trials: GOODBYEE"<<endl;
            break;
        }
        
    } while (true);
    
}