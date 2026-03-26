#include<iostream>
using namespace std;

int main(){
    double  value;
    double result;
    int choice;
    
    
    cout<<"\tFahrenheit / Celsius Convertor"<<endl;
    cout<<"\tchoose the conversen from to (1 or 2)"<<endl;
    cout<<endl<<"\t-------------------------------"<<endl;
    cout<<"\t(1) celsius to Fahrenhit"<<endl;
    cout<<"\t(2) Fahrenhit to celsius"<<endl;
    cin>>choice;

    if(choice == 1){
        cout<<endl<<"\tCelsius = ";
        cin>>value;
        cout<<"\t"<<value<<" C"<<endl;
        result = (value * 1.8) + 32;
        cout<<"\tFahrenheit = "<<result<<" F";
    }else if(choice == 2){
        cout<<endl<<"\tFahrenhit = ";
        cin>>value;
        cout<<endl<<"\t"<<value<<" F"<<endl;
        result = (value - 32) * 1.8;
        cout<<"\tCelsius = "<<result<<" C";
    }else{
        cout<<endl<<"\twrong choice";
    }

    

    
    return 0;
}