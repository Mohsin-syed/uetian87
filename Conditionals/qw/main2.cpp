#include <iostream>
using namespace std;

main(){
    
    int Account_balance=0;
    double interest=0;
    double total_Amount_Due;
    
    
    cout << "Enter your acount balance in dollars "<<endl;
    cin>>Account_balance;
    
    if(Account_balance>=1000){
        
        interest= ((Account_balance*1.5)*.01) ;
    }
    else{
        interest = (Account_balance/100) ;
        }
        total_Amount_Due=Account_balance+interest;
        cout<<total_Amount_Due <<endl ;
    
}