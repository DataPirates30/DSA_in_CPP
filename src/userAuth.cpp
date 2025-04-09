//Simple user Auth using strcuture, that let's registering and login validation
#include<iostream>

using namespace std;

struct Employee{
    private:
        string user_name;
        string password;

    public:
        //Methods to set the password and get the password
        //Function to check if the employee is valid or not
        bool isValid(string user_name,string password){
            if(this->user_name == user_name && this->password == password) return true;
            return false;
        }
        //This concept is encapsulation
        void setUserDetails(string user_name, string password){
            this->user_name = user_name;
            this->password = password;
        }

};

int main(){
    //Default employee
    Employee e1;
    //Setting the password for the employee, before running the main application
    string user_name,password,conPassword;

    cout<<"..........Registering the employee for demo purpose................."<<endl;
    cout<<".......This can be scalable but we are only implementing one employee right now....."<<endl;

    cout<<"..........Register................."<<endl;
    
    cout<<"UserName: ";
    cin>>user_name;

    while(true){
        cout<<"Password: ";
        cin>>password;

        cout<<"Confirm Password: ";
        cin>>conPassword;

        if(password == conPassword ){
            e1.setUserDetails(user_name,password);
            break;
        }
        else{
            cout<<"..............Password doesn't match(Do it again,my boy)............."<<endl;
        }
    }
    //Now the employee is registered and we are going to login now, once the credentials are 
    //validated then we will run our main program

    cout<<"...................Login....................."<<endl;

    cout<<"UserName: ";
    cin>>user_name;

    cout<<"Password: ";
    cin>>password;

    if(e1.isValid(user_name,password)){
        //run the program
        cout<<"Program is running fine"<<endl;
    }
    else
        cout<<".................Don't try to enter the system with invalid credentials, I caught you..........."<<endl;
    
    return 0;
}