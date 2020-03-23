#include <iostream>
using namespace std;
 main()
{
	
    int number;
    cout<<"Give a number"<<endl;
    cin>>number;
    
    if((number>=1)||(number<=100)){
        
        if((number%2==0)||(number%3==0)){
            cout <<number<<" is not prime "<<endl;
        }
        else{
            cout<<number<<" is prime"<<endl;
        }
    }
}
