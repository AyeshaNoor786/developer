/* Roll No : _________ Name : _______________________

1. Dry run the following code
2. Point-out parts where you need explanation
3. Make code to behave ==? more real

====================================================*/

#include <iostream>
#include <cstdlib>

using namespace std;

struct Time
{
	int hr;
	int mn;
	int sc;
};

Time inputTime(); // get time value from user and returns
void displayTime(const Time&);
double timeDiff(const Time&, const Time&);
bool timeSame(const Time&, const Time&);
Time addHours(const Time&, const int);
Time addMinutes(const Time&, const int);
Time addSeconds(const Time&, const int);
Time addTime(const Time&, const Time&);
// place more fuctions prototypes here


int main()
{
	Time startTime ;
	Time finishTime ;
	double duration;

	cout << "Enter starting Time in format hh mm ss: " ;
	startTime = inputTime();

	cout << "Enter finishing Time in format hh mm ss: " ;
	finishTime = inputTime();

	duration = timeDiff(finishTime, startTime);

	cout << "Duration between ";
	displayTime(startTime);
	cout << " and ";
	displayTime(finishTime);
	cout << " is ";
	cout << duration ;
	cout << " hours." ;

	cout << endl ;
	cout << endl ;
	//system("pause");
}

struct Time inputTime()
{
	Time t;

	cin >> t.hr ;
	cin >> t.mn ;
	cin >> t.sc ;

	return t;
}

void displayTime(const Time &t)
{
	if(t.hr <= 9)
	{
		cout << "0";
	}
	cout << t.hr ;
	cout << ":" ;
	if(t.mn <= 9)
	{
		cout << "0";
	}
	cout << t.mn ;
	cout << ":" ;
	if(t.sc <= 9)
	{
		cout << "0";
	}
	cout << t.sc ;
}

double timeDiff(const Time& t2, const Time& t1)
{
	double d ;
	Time t = t2;
	
	if(t.sc < t1.sc)
	{
		t.sc = t.sc + 60 ;
		t.mn = t.mn - 1;
	}
	d = (double)(t.sc - t1.sc) / 3600.0 ;

	while(t.mn < t1.mn)
	{
		t.mn = t.mn + 60 ;
		t.hr = t.hr - 1;
	}
	d = d + (double)(t.mn - t1.mn) / 60.0 ;

	d = d + (t.hr - t1.hr) ;

	return d;
}

Time addHours(const Time& t, const int h)
{
	Time tmp;

	tmp = t ;
	tmp.hr = tmp.hr + h;

	return tmp;
}

Time addMinutes(const Time& t, const int m)
{
	Time tmp;

	tmp = t ;
	tmp.mn = tmp.mn + m;
	if(tmp.mn >= 60)
	{
		tmp.mn = tmp.mn - 60;
		tmp.hr = tmp.hr + 1;
	}
	return tmp;
}

Time addSeconds(const Time& t, const int s)
{
	Time tmp;

	tmp = t ;
	// your implementation














	return tmp;
}

Time addTime(const Time& t1, const Time& t2)
{
	Time tmp;

	tmp = t1 ;
	// your implementation












	return tmp;
}


// place more functions implementations here
