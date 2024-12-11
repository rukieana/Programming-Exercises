#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int hour, minute , mirrorHour , mirrorMinute;
    cout << "Enter hour(s) and minute(s)";
    cin >> mirrorHour >> mirrorMinute;
    hour = (12 - mirrorHour) % 12
    minute = (6 - mirrorMinute) % 6
    cout << setw(2) << setfill('0') <<  hour <<":";
    cout << setw(2) << setfill('0') << minute;

    return 0;
}

    

        
