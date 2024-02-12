/* Rasheduzzaman
Computer Science & Engineering
Dhaka International University (DIU)*/

#include<iostream>
using namespace std;

int main()
{
    
    cout<<"\t\t\t ___________________________________________________________________ \n\n";
    cout<<"\t\t\t                               CALCULATOR                             \n";
    cout<<"\t\t\t ___________________________________________________________________ \n\n\n";
    cout<<"\t\t\t| Press 1 to ADDITION                                               |"<<endl;
    cout<<"\t\t\t| Press 2 to SUBTRACTION                                            |"<<endl;
    cout<<"\t\t\t| Press 3 to MULTIPLICATION                                         |"<<endl;
    cout<<"\t\t\t| Press 4 to DIVISION                                               |"<<endl;
    cout<<"\n";
    cout<<"\t\t\t| Enter your choice   :                                             ";
    int option;
    cin>>option;
    cout<<endl;

    double n1, n2;
    cout<<"\t\t\t| Enter First Number  :                                             ";
    cin>>n1;
    cout<<"\t\t\t| Enter Second Number :                                             ";
    cin>>n2;


    switch(option)
    {
        case 1:
        cout<<"\t\t\t| Addition Result is  : "<<n1<<" "<<" + "<<" "<<n2<<" = "<<n1+n2<<endl;
        cout<<endl;
        break;

        case 2:
        cout<<"\t\t\t| Subtraction Result is: "<<n1<<" "<<" - "<<" "<<n2<<" = "<<n1-n2<<endl;
        cout<<endl;
        break;

        case 3:
        cout<<"\t\t\t| Multiplication Result is: "<<n1<<" "<<" * "<<" "<<n2<<" = "<<n1*n2<<endl;
        cout<<endl;
        break;

        case 4:
        if(n2==0.0)
        {
            cout<<"\t\t\t| Division by zero situation!"<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"\t\t\t| Division Result is  : "<<n1<<" "<<" / "<<" "<<n2<<" = "<<n1/n2<<endl;
            cout<<endl;
        }
        break;

        default:
            cout<<"\t\t\t| Enter a valid value!"<<endl;
            cout<<endl;
    }
}