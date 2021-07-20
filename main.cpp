//The program of Vehicle Parking Record
#include <iostream>

using namespace std;

int main()
{
    //This line shows about the software heading
    cout<<"\n*****************************Vehicle Parking Software****************************"<<endl;
    cout<<"\n\n*************************Records Of Vehicle Parking***************************"<<endl;
    //Data type decleration
    int c=0,r=0,b=0;
    int p_input;
    int amount=0,var_count=0;//to initialize the variable
    //Menu option for user
    while (true)
    {
    cout<<"\nPress 1 For Rickshaws"<<endl;
     cout<<"Press 2 For Cars"<<endl;
      cout<<"Press 3 For Buses"<<endl;
       cout<<"Press 4 to show the Parking Record"<<endl;
        cout<<"Press 5 to Delete the Parking Record"<<endl;
        cin>>p_input; //User input
        //conditions for record
        if (p_input==1)
        {
            if (var_count<=50)
            {
            r++;
            amount = amount + 100;
            var_count = var_count + 1;
        }
        else
            cout<<"No more Vehicle -- Parking is full"<<endl;
        }
        else if (p_input==2)
        {
            if (var_count<=50)
            {
            c++;
            amount = amount + 200;
            var_count = var_count + 1;
        }
        else
            cout<<"No more Vehicle --Parking is full"<<endl;
        }
        else if (p_input==3)
        {
            if (var_count<=50)
            {
            b++;
            amount = amount + 300;
            var_count = var_count + 1;
        }
        else
            cout<<"No more Vehicle -- Parking is full"<<endl;
        }
        else if (p_input==4) //to print total of all vehicles,amount
        {
            cout<<"***************************************************"<<endl;
            cout<<"The total no of Rickshaws Parked = "<<r<<endl;
            cout<<"The total no of Cars Parked = "<<c<<endl;
            cout<<"The total no of Buses Parked = "<<b<<endl;
            cout<<"The total no of all Vehicle Parked = "<<var_count<<endl;
            cout<<"The total Amount of Vehicle Parked = "<<amount<<endl;
            cout<<"****************************************************"<<endl;
        }
        else if (p_input==5) //to show the record deleted
        {
            amount = 0;
            var_count = 0;
            r = 0;
            c = 0;
            b = 0;
            cout<<"*************************************"<<endl;
            cout<<"RECORD DELETED"<<endl;
            cout<<"*************************************"<<endl;
        }
        else
            {
            cout<<"Invalid Option Error \n Choose appropriate Option from given above"<<endl;
            }
    }
    return 0;
}
