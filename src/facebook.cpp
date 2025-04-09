// This code shows how facebook validation and authentication works
// We will have two option either login or register
// If you have id already registered you can login with that id, if not you need to register 
#include <iostream>
using namespace std;

struct  FaceBook
{
    
};

int main(){
    cout<<"facebook.com"<<endl;
    cout<<"--------------------This is the landing page-------------------------"<<endl;

    char log_id;
    
    while(true){
        cout<<"Login(Enter 1): "<<endl;
        cout<<"Register(Enter 2: ";
        cin>>log_id;

        if(log_id == '1' || log_id == '2')
            break;      
    }

    cout<<log_id<<endl;

    

    return 0;
}

