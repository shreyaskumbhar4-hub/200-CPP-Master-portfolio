#include <iostream>
using namespace std;

int main(){
    // Age Calculator
    cout<<"Age Calculater"<<endl;

    
        int currentDay,birthDay;
        int currentMonth,birthMonth;
        int currentYear,birthYear;
        int age;
    

    int dayOfYear[]={31,28,31,30,31,30,31,31,30,31,30,31}; //Array in c++

    // Current date
    cout<<"\tEnter the Current date (Current year > 1900)"<<endl;
    cout<<"\tEnter Current day"<<endl<<"\t";
    cin>>currentDay;
    if (currentDay>31){
       cout<<endl<<"\t[Wrong Input] :> Current Day"<<endl;
        return 1; 
    }else{
        cout<<endl<<"\tEnter Current Month"<<endl<<"\t";
        cin>>currentMonth;
        if(currentMonth>12){
         cout<<endl<<"\t[Wrong Input] :> Current Month"<<endl;
            return 1;   
        }else{
            cout<<endl<<"\tEnter Current Year"<<endl<<"\t";
            cin>>currentYear;
            if (currentYear<1900){
                cout<<endl<<"\t[Wrong Input] :> Current Month"<<endl;
                return 1; 
            }
        }        
    }
    cout<<endl<<endl<<endl;

    cout<<"\tEnter the birth date (Birth year > 1900)"<<endl;
    cout<<"\tEnter birth day"<<endl<<"\t";
    cin>>birthDay;
    if (birthDay>31){
        cout<<endl<<"\t[Wrong Input] :> Birth Day"<<endl;
        return 1;
    }else{
        cout<<endl<<"\tEnter birth Month"<<endl<<"\t";
        cin>>birthMonth;
        if (birthMonth>12 ){
            cout<<endl<<"\t[Wrong Input] :> Birth Month"<<endl;
            return 1;
        }else{
    
            cout<<endl<<"\tEnter birth Year"<<endl<<"\t";
            cin>>birthYear;
            if (birthYear>currentYear){
                cout<<endl<<"\t[Wrong Input] :> Birth Year"<<endl;
                return 1;
            }
        }
    }



    return 0;
}