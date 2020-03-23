#include <iostream>
using namespace std;

main()
{
	// Declaration of input Variables
    
    char day_of_Week1;
    char day_of_Week2;
    double start_time;
    int length_of_Call_Mins;
    double cost;
    
    //Getting input from user
    
    cout<<"Enter day of week "<<endl;
    cin>>day_of_Week1>>day_of_Week2;
    
    cout<<"Enter the time when you started calling "<<endl;
    cin>>start_time;
    
    cout<<"Enter length of call in minutes "<<endl;
    cin>>length_of_Call_Mins;
    
     //Displaing the output
     
     cout<<day_of_Week1<<day_of_Week2<<endl;
     cout<<start_time<<endl;
     cout<<length_of_Call_Mins<<endl;
	
    
    
    
    
    if (((day_of_Week1=='M')||(day_of_Week1=='m'))&&((day_of_Week2=='O')||(day_of_Week2=='o')))

        {

            if ((start_time>=800)||(start_time<=1800))

            {

                cost=length_of_Call_Mins*.40;

            }

            else

            {

                cost=length_of_Call_Mins*.25;
          }

        }

        else if(((day_of_Week1=='T')||(day_of_Week1=='t'))&&((day_of_Week2=='U')||(day_of_Week2=='u')))

        {

           if ((start_time>=800)||(start_time<=1800))

            {

               cost=length_of_Call_Mins*.40;

            }

            else

            {

                cost=length_of_Call_Mins*.25;

            }
       }

       else if(((day_of_Week1=='W')||(day_of_Week1=='w'))&&((day_of_Week2=='E')||(day_of_Week2=='e')))

        {

            if ((start_time>=800)||(start_time<=1800))

            {

                cost=length_of_Call_Mins*.40;

            }

           else

            {

                cost=length_of_Call_Mins*.25;

            }

        }

        else if(((day_of_Week1=='T')||(day_of_Week1=='t'))&&((day_of_Week2=='H')||(day_of_Week2=='h')))

       {

            if ((start_time>=800)||(start_time<=1800))

            {

                cost=length_of_Call_Mins*.40;

            }

            else

            {

               cost=length_of_Call_Mins*.25;

            }
       }

        else if(((day_of_Week1=='F')||(day_of_Week1=='f'))&&((day_of_Week2=='R')||(day_of_Week2=='r')))

        {
            if ((start_time>=800)||(start_time<=1800))

            {

                cost=length_of_Call_Mins*.40;

            }

            else

            {

                cost=length_of_Call_Mins*.25;

            }

        }

        else if(((day_of_Week1=='S')||(day_of_Week1=='s'))&&((day_of_Week2=='A')||(day_of_Week2=='a')))

        {

            cost=length_of_Call_Mins*.15;

        }

        else if(((day_of_Week1=='S')||(day_of_Week1=='s'))&&((day_of_Week2=='U')||(day_of_Week2=='u')))

        {

           cost=length_of_Call_Mins*.15;

        }

        cout<<"The cost of the call is "<<cost<<"dollars";

        cout<<endl;


}
 