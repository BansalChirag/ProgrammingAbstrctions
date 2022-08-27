#include<iostream>
using namespace std;

class timetrack{
    int hours,minutes;
    public:
    void input_time(){
        cout << "Enter Hours : ";
        cin >> hours;
        cout << "Enter minutes : ";
        cin >> minutes;
            if(minutes>=60){
                hours += minutes/60;
                minutes = minutes % 60;
            }
    }
    void show_work_time(){
        if(minutes>=60){
            hours += minutes/60;
            minutes = minutes % 60;
        }
            cout << "Hours : " << hours << endl;
            cout << "Minutes : " << minutes << endl;
    }
    friend timetrack total_team_time(const timetrack&, const timetrack&);
    
};
timetrack total_team_time(const timetrack& t1, const timetrack & t2){
    timetrack t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    if(t.minutes >= 60){
        t.hours += t.minutes/60;
        t.minutes = t.minutes % 60;
    }
    return t;
}

int main(){

    timetrack t1,t2,t3;
    t1.input_time();
    t1.show_work_time();
    t2.input_time();
    t2.show_work_time();
    // timetrack t2;
    // t2.input_time();

    // timetrack t3;
    t3 = total_team_time(t1, t2);

    t3.show_work_time();

    return 0;
}