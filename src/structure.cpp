// // Let's learn about structure in this file
// // When you declare a structure in the function, it gets allocated on the stack.

// #include <iostream>
// using namespace std;

// struct Car
// {
//     private:    
//         string dealer_name;
//         string payment;

//     public:
//         string name;
//         string version;
//         string price;

//         Car(string name, string version, string price,string dealer_name, string payment){
//             //this is pointer to the object itself and -> it member access operator
//             this->name = name;
//             this->version =version;
//             this -> price = price;
//             this -> dealer_name = dealer_name;
//             this-> payment = payment;
//             }  

//         void printDetails(){
//             cout<<"Name: "<<this-> name<<endl;
//             cout<<"Version: "<<this->version<<endl;
//             cout<<"Price: "<<this->price<<endl;
//             cout<<"Dealer's name: "<<this -> dealer_name<<endl;
//         }
// ;
// };


// int main(){
//     Car c1("Tesla","Model Y","$120,000","Suman","$20,000");
//     c1.printDetails();
//     cout<<c1.dealer_name;
//     return 0;
// }