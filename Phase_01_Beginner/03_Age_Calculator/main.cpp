#include <iostream>
using namespace std;


// Function to check if a year is a leap year
bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// Function to count total leap years between two years
int countLeapYears(int d_birth, int m_birth, int y_birth, int d_curr, int m_curr, int y_curr) {
    int count = 0;
    
    // We check every year from birth to current
    for (int i = y_birth; i <= y_curr; i++) {
        if (isLeap(i)) {
            // Only count if the leap day (Feb 29) was actually lived through
            if (i == y_birth && m_birth > 2) continue; // Born after Feb 29
            if (i == y_curr && m_curr < 2) continue;   // Current date is before Feb 29
            
            count++;
        }
    }
    return count;
}
int main(){
    // Age Calculator
    cout<<"\t\tAge Calculater"<<endl;

    
        int currentDay,birthDay;
        int currentMonth,birthMonth;
        int currentYear,birthYear;
        int age;
    

    int dayOfYear[]={31,28,31,30,31,30,31,31,30,31,30,31}; //Array in c++

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

    if((birthYear % 4 == 0 && birthYear % 100 != 0) || (birthYear % 400 ==0)){
        dayOfYear[1]=29;
    }
    if (currentDay < birthDay) {
        // We look at the month we are borrowing FROM (the month before the current one)
        int prevMonth = currentMonth - 1;
        if (prevMonth == 0) prevMonth = 12; 

        if (prevMonth == 2) {
            // If we borrow from Feb, we check if CURRENT year is leap
            currentDay += isLeap(currentYear) ? 29 : 28;
        } else {
            currentDay += dayOfYear[prevMonth - 1];
        }
        currentMonth--;
    }

    // 2. Borrowing Logic for Months
    if (currentMonth < birthMonth) {
        currentMonth += 12;
        currentYear -= 1;
    }

    // 3. Final Subtraction
    int finalDay = currentDay - birthDay;
    int finalMonth = currentMonth - birthMonth;
    int finalYear = currentYear - birthYear;

    // --- OUTPUT SECTION ---
    cout << "\n\t======================================" << endl;
    cout << "\t   RESULT: " << finalYear << " Years, " << finalMonth << " Months, " << finalDay << " Days" << endl;
    cout << "\t======================================" << endl;

    return 0;
}