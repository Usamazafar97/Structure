# Structure
Q 1. Write a structure Student that has the following data members: rollNo of type int, name of type
string, city of type string and phone of type string. Write a Function InitializeStudent which takes Stu-
dent s , and four parameters int rollNo,string name, string city, string phone as function input. You have to
initialize Student object, with each value passed in function argument.
V oid InitializeStudent (Student &s, int rollNo,string name, string city, string phone)
Q 2. A phone number can be thought of three parts: the area code (111), the exchange (767), and the
number (1011). All data member are of type int. Write a structure to store these three parts of phone
number separately named as PhoneNumber.
Q 3. Write a function PhoneNumberArrayIntialize which takes an array arr of type PhoneNumber,of size
s,you have to store PhoneNumber objects at each index of array arr.Assign values to each object of Pho-
neNumber such that area code starts from 111, exchange starts from 767 and number starts from 1011
sequentially.
Void PhoneNumberArrayIntialize(PhoneNumber arr[],int s);
Q 4. Write a function PrintPhoneNumber which takes p as PhoneNumber object ,you have to print p in
following format
(area code) Exchange-Number .
Example: (111) 767-1011
Void PrintPhoneNumber(PhoneNumber p)
Q 5. Declare a structure named as CustomTime having three members; hours, min and seconds of type int.
Q 6. Write a function timeToSeconds which takes CustomTime object t1 as function parameter, you have
to convert this object to seconds (of type long) and return it.(Calculate the total seconds in time)
long timeToSeconds(CustomTime t1)
Q 7. Write a function SecondsToTime which takes long t as function parameter and return it in the form of
a CustomTime object. CustomTime SecondsToTime(long t)
Q 8. Write a function AddTimes which takes as input parameters CustomTime object t1 and CustomTime
object t2
1. You have to convert these two objects t1, t2 in seconds using above dened function timeToSeconds.
2. Add both seconds returned from above step.
3. Use above dened function SecondsToTime and convert back it to the CustomTime object and return it.
CustomTime AddTimes(CustomTime t1, CustomTime t2)
Q 9. Write a function MakeNewTime which only create a dynamic memory of size 1 on heap for CustomTime
object and return its pointer to CustomTime.
CustomTime* MakeNewTime()
Q 10. Write a function IntilaizeTime which takes CustomTime* p and int totalSec as function parameters,
convert totalSec into hours, minutes and seconds and assign it to a p using dynamic memory allocation.
Hint: use above dened function MakeNewTime and SecondsToTime
Void IntilaizeTime(CustomTime* & p,int totalSec)
Q 11. Write a function MakeArrayOfTimes which only create a dynamic array of size s on heap for Cus-
tomTime object and return its pointer to CustomTime.
CustomTime* MakeArrayOfTimes(int s)
Q 12. Write a function IntilaizeTimeArray which create a dynamic array of size s on heap using previously
dened function MakeArrayOfTimes, assign it to p of type pointer to CustomTime and initialize its values
from the array of hours, mins and sec. Each array is of size s and type int.
Void IntilaizeTimeArray(CustomTime* p,int hours[],int mins[],int sec[],int s)
Q 13. Write a structure \Fraction" that has the following data members: int deNom, int Nom.
\deNom" is the denominator value.
\Nom" is the nominator value
Q 14. Write a function which takes Fraction f as reference of fraction object, int deNom and int Nom as
function parameters. Your task is to initialize object f with values of deNom and Nom.
Void IntializeFraction(Fraction &f,int deNom,int Nom)
Hint: you have to check for zero as denominator
Q 15. Write a function which takes Fraction f1 and Fraction f2 as function parameters . Your task is to sum
the two fractions f1 and f2 and return its sum as a new fraction.
Fraction AddFractions(Fraction f1, Fraction f2)
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Q 16. Write a function which takes Fraction f1 and Fraction f2 as function parameters . Your task is to
multiply the two fractions f1 and f2 and return its result as a new fraction.
Fraction MultiplyFractions(Fraction f1, Fraction f2)
Multiplication: a/b * c/d = (a*c) / (b*d)
Q 17. Write a function which takes Fraction f1 and Fraction f2 as function parameters. Your task is to
subtract the fraction f2 from fraction f1 and return its result as a new fraction.(f1-f2)
Fraction SubtractFractions(Fraction f1, Fraction f2)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Q 18. Write a function which takes Fraction f1 and Fraction f2 as function parameters.
Your task is to divide the fraction f1 by fraction f2 and return its result as a new fraction.
Hint: you have to check for zero as denominator
Fraction DivideFractions(Fraction f1, Fraction f2)
Division: a/b / c/d = (a*d) / (b*c)