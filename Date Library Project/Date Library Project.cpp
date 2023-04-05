
#include <iostream>
#include <string>
#include "clsDate.h"
#include "clsString.h"
#include "clsPeriod.h"

using namespace std;

int main()
{
	clsDate Date1;
	Date1.Print();

	clsDate Date2("31/12/2022");
	Date2.Print();


	clsDate Date3(20,12,2022);
	Date3.Print();

	clsDate Date4(250 , 2022);
	Date4.Print();


	clsDate Date100(1, 1, 2022);
	clsDate Date101(1, 5, 2022);

	clsDate Date200(3, 3, 2022);
	clsDate Date201(10, 5, 2022);


	clsPeriod Period1(Date100, Date101);
	clsPeriod Period2(Date200, Date201);

	cout << "Check OverLap: " << Period1.IsOverLapWith(Period2) << endl;
	cout << "Check OverLap: " << Period1.IsOverlapPeriods(Period1, Period2) << endl;
	cout <<"Check OverLap: " << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;


	cout << "Check Leap Year: " << Date1.IsLeapYear() << endl;
	cout << "Check Leap Year: " << Date1.IsLeapYear(2000) << endl;
	cout << "Check Leap Year: " << clsDate::IsLeapYear(2022) << endl;

	cout << "Number Of Days in Year: " << Date1.NumberOfDaysInAYear() << endl;
	cout << "Number Of Days in Year: " << Date1.NumberOfDaysInAYear(2005) << endl;
	cout << "Number Of Days in Year: " << clsDate::NumberOfDaysInAYear(2004) << endl;


	cout << "Number Of Days in Month: " << Date2.NumberOfDaysInAMonth() << endl;
	cout << "Number Of Days in Month: " << Date2.NumberOfDaysInAMonth(2,2005) << endl;
	cout << "Number Of Days in Month: " << clsDate::NumberOfDaysInAMonth(5,2004) << endl;


	cout << "Number Of Hours in Month: " << Date2.NumberOfHoursInAMonth() << endl;
	cout << "Number Of Hours in Month: " << Date2.NumberOfHoursInAMonth(2, 2005) << endl;
	cout << "Number Of Hours in Month: " << clsDate::NumberOfHoursInAMonth(5, 2004) << endl;

	cout << "Number Of Minutes in Month: " << Date2.NumberOfMinutesInAMonth() << endl;
	cout << "Number Of Minutes in Month: " << Date2.NumberOfMinutesInAMonth(2, 2005) << endl;
	cout << "Number Of Minutes in Month: " << clsDate::NumberOfMinutesInAMonth(5, 2004) << endl;

	cout << "Number Of Seconds in Month: " << Date2.NumberOfSecondsInAMonth() << endl;
	cout << "Number Of Seconds in Month: " << Date2.NumberOfSecondsInAMonth(2, 2005) << endl;
	cout << "Number Of Seconds in Month: " << clsDate::NumberOfSecondsInAMonth(5, 2004) << endl;

	cout << "Number Of Days From Begining of Year: " << Date2.NumberOfDaysFromBeginingOfYear() << endl;
	cout << "Number Of Days From Begining of Year: " << Date2.NumberOfDaysFromBeginingOfYear(1,2, 2005) << endl;
	cout << "Number Of Days From Begining of Year: " << clsDate::NumberOfDaysFromBeginingOfYear(5,5, 2004) << endl;

	Date1.PrintMonthCalender(2, 2022);
	Date2.PrintYearCalender(2022);

	cout << "Day Of Week Order: " << Date3.DayOfWeekOrder() << endl;
	cout << "Day Of Week Order: " << Date3.DayOfWeekOrder(2,5,2020) << endl;
	cout << "Day Of Week Order: " << clsDate::DayOfWeekOrder(5,4,2001) << endl;


	cout << "Day Short Name: " << Date3.DayShortName(2) << endl;
	cout << "Day Short Name: " << clsDate::DayShortName(4) << endl;

	cout << "Month Short Name: " << Date3.MonthShortName(2) << endl;
	cout << "Month Short Name: " << clsDate::MonthShortName(4) << endl;

	

	system("pause>0");
	return 0;
}

