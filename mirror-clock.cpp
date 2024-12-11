#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int hour, minute , mirrorHour , mirrorMinute;
    cout << "Enter hour(s) and minute(s)";
    cin >> hour >> minute;
    mirrorHour = (12 - hour) % 12
    mirrorMinute = (6 - minute) % 6
    cout << setw(2) << setfill('0') << mirrorhour <<":";
    cout << setw(2) << setfill('0') << mirrorminute;

    return 0;
}

    

        
