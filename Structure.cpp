
#include<iostream>
#include<cstring>
using namespace std;
struct student
{
	int rollNo;
	string name;
	string city;
	string phone;
};
struct PhoneNumber
{
	int AreaCode;
	int Exchange;
	int Number;
};
struct  CustomTime
{
	int hours;
	int min;
	int seconds;
};
struct  Fraction
{
	int deNom;
	int Nom;
};

void InitializeStudent(student &s, int rollNo, string name, string city, string phone)
{ //write your code here
	s.rollNo = 170012;
	s.name = "Usama Zafar";
	s.city = "Islamabad";
	s.phone = "0315";
}
void PhoneNumberArrayIntialize(PhoneNumber arr[], int s)
{ //write your code here
	for (int i = 0; i < s; i++) {
		arr[i].AreaCode = 111 + i;
		arr[i].Exchange = 767 + i;
		arr[i].Number = 1011 + i;
	}

}
void PrintPhoneNumber(PhoneNumber p)
{ //write your code here
	cout << "(" << p.AreaCode << ")" << p.Exchange << "-" << p.Number;
}

long timeToSeconds(CustomTime t1)
{ //write your code here
	long seconds;
	seconds = t1.hours * 3600 + t1.min * 60 + t1.seconds;
	return seconds;

}
CustomTime SecondsToTime(long t)
{ //write your code here
	CustomTime time;
	time.hours = t / 3600;
	time.min = t / 60;
	time.seconds = t / 1;
	return time;

}
CustomTime AddTimes(CustomTime t1, CustomTime t2)
{ //write your code here
	long second1 = timeToSeconds(t1);
	long second2 = timeToSeconds(t2);
	long Sum = second1 + second2;
	return SecondsToTime(Sum);
}
CustomTime* MakeNewTime()
{ //write your code here
	CustomTime * ptr = new CustomTime;
	return ptr;
}
void IntilaizeTime(CustomTime* & p, int totalSec)
{ //write your code here
	p = MakeNewTime();
	*p = SecondsToTime(totalSec);
}
CustomTime* MakeArrayOfTimes(int s)
{ //write your code here
	CustomTime * ptrArray = new CustomTime[s];
	return ptrArray;
}
void IntilaizeTimeArray(CustomTime* &p, int hours[], int mins[], int sec[], int s)
{ //write your code here
	p = MakeArrayOfTimes(s);
	for (int i = 0;i<s;i++)
	{
		p[i].hours = hours[i];
		p[i].min = mins[i];
		p[i].seconds = sec[i];
	}
}
void IntializeFraction(Fraction &f, int deNom, int Nom)
{ //write your code here
	if (deNom == 0)
	{
		f.deNom = 1;
	}
	else f.deNom = deNom;
	f.Nom = Nom;
}
Fraction AddFractions(Fraction f1, Fraction f2)
{ //write your code here
	Fraction F3;
	F3.Nom = (((f1.Nom)*(f2.deNom) + (f1.deNom)*(f2.Nom)) / (f1.deNom*f2.deNom));
	return F3;
}
Fraction MultiplyFractions(Fraction f1, Fraction f2)
{ //write your code here
	Fraction F3;
	F3.Nom = (((f1.Nom)*(f2.Nom)) / (f1.deNom*f2.deNom));
	return F3;
}
Fraction SubtractFractions(Fraction f1, Fraction f2)
{ //write your code here
	Fraction F3;
	F3.Nom = (((f1.Nom)*(f2.deNom) - (f1.deNom)*(f2.Nom)) / (f1.deNom*f2.deNom));
	return F3;
}
Fraction DivideFractions(Fraction f1, Fraction f2)
{ //write your code here
	if (f1.deNom == f2.deNom == 0)
	{
		f1.deNom = f2.deNom = 1;
	}
	Fraction F3;
	F3.Nom = (((f1.Nom)*(f2.deNom)) / (f1.deNom*f2.Nom));
	return F3;
}
int main()
{
	student S;
	PhoneNumber PN;
	return 0;
}
