

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "  BBBBBBB     JJJJJ    AAAAA     RRRRR     N     N     EEEEEE                                        "; cout << "\n";
//	cout << "  B      B        J    A   A     R   R     NN    N     E                                             "; cout << "\n";
//	cout << "  BBBBBBB         J    AAAAA     RRRRR     N N   N     EEE                                           "; cout << "\n";
//	cout << "  B      B    J   J    A   A     R R       N  N  N     E                                             "; cout << "\n";
//	cout << "  BBBBBBB     JJJJ     A   A     E   R     N    NN     EEEEEE                                        "; cout << "\n";
//
//	system("pause");
//	return 0;
//
//
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	string name;
//	cout << " ENTER YOUR FULL NAME ";
//	cin >> name; cout << "\n";
//	int age;
//	cout << " ENTER YOUR AGE ";
//	cin >> age; cout << "\n";
//	string collegeName;
//	cout << " ENTER YOUR COLLEGE NAME ";
//	cin >> collegeName; cout << "\n";
//	string cityName;
//	cout << " ENTER YOUR CITY NAME ";
//	cin >> cityName; cout << "\n";
//	string profession;
//	cout << " ENTER YOUR PROFESSION ";
//	cin >> profession; cout << "\n";
//	string animalType;
//	cout << " ENTER YOUR ANIMAL TYPE OF YOUR PET ";
//	cin >> animalType; cout << "\n";
//	system("pause");
//	return 0;
//
//
//
//
//
//
//}



//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int rem = 0;
//	int num;
//	cout << " enter 5-digit number:";
//	cin >> num;
//	for (int i = 0; num > 0; i++)
//	{
//		rem = num % 10;
//		cout << rem << "   ";
//		num = num / 10;
//	}
//	
//
//	
//	system("pause");
//	return 0;
//
//
//
//
//
//
//
//}























//#include<iostream>
//using namespace std;
//int main()
//{
//	float weightPounds;
//	float riceWeightKg;
//	float bagCapacity;
//	int numberOfBags;
//	
//	
//	cin >> numberOfBags;
//	cout << " 1 metric ton in pounds :";
//	cout<<"1 metric ton = 2205 pounds";
//	cin >> bagCapacity;
//	cout << " how much pounds does the bag hold?"; 
//	cout<<"2205 pounds / bagCapacity = number of bags";
//	cout << " number of bags";
//	cin >> riceWeightKg;
//	cout << " amount of rice in one bag";
//	system("pause");
//	return 0;
//
//
//}
















//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	double meal=44.50;
//	double tax = 0.0675 * meal;
//	double tip = (meal + tax) * 0.15;
//	double total = meal + tax + tip;
//	
//	cout << " THE MEAL COST IS : " <<meal <<endl;
//	cout << " THE TAX AMOUNT US  : $" << tax << endl;
//	cout << " THE TIP AMOUNT IS : $" << tip << endl;
//	cout << " THE TOTAL BILL IS : $" << total << endl;
//	system("pause");
//	return 0;
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//}
// 

















//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int elapsedTimeSeconds;
//	elapsedTimeSeconds = 9630;
//	int timeInHours;
//	timeInHours = elapsedTimeSeconds / 3600;
//	cout << "TIME IN HOURS =" << timeInHours; cout << "\n";
//	int remainingTime;
//	remainingTime = 9630 % 3600; 
//	cout << "remainig time in minutes " << remainingTime; cout << "\n";
//	int timeMinutes;
//	timeMinutes = remainingTime / 60;
//	cout << " time in minutes" << timeMinutes; cout << "\n";
//	
//	int remainingSeconds;
//	remainingSeconds = remainingTime % 60;
//	cout << " remaining time in seconds " << remainingSeconds; cout << "\n";
//	
//	cout << timeInHours << ":" << timeMinutes << ":" << remainingSeconds;
//
//	system("pause");
//	return 0;
//
//}




















//#include<iostream>
//using namespace std;
//int main()
//{
//	int companySurveyed;
//	companySurveyed = 12467;
//	int purchaseDrinks;
//	purchaseDrinks = companySurveyed * 0.14;
//	cout << " CUSTOMERS WHO PURCHASES ENERGY DRINKS PER WEEK= " << purchaseDrinks; cout << "\n";
//	
//	int citrusDrinks;
//	citrusDrinks = purchaseDrinks * 0.64;
//	cout << "CUSTOMERS WHO PURCHASES CITRUS DRINKS= " << citrusDrinks; cout << "\n";
//	
//
//	system("pause");
//	return 0;
//}














//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	float massM1, massM2;
//	double k = 0.0000000667;
//	float distance;
//	
//	cout << " enter mass 1 = ";
//	cin >> massM1;
//	cout << " enter mass 2 = ";
//	cin >> massM2;
//	float m;
//	cout << " enter distance = ";
//	cin >> distance;
//
//	m = massM1 * massM2;
//	cout << " enter x = " << m; cout << "\n";
//	float d;
//	d = m / (distance * distance);
//	cout << " enter d = " << d; cout << "\n";
//	float force;
//	force = 0.0000000667 * d;
//	cout << " enter force = " << force; cout << "\n";
//	system("pause");
//	return 0;
//
//
//}












//#include<iostream>
//using namespace std;
//#include< cmath>
//int main()
//
//{
//	float f;
//	float i;
//	const float PI = 3.14;
//	float x;
//	cout<< " enter f = ";
//	cin >> f;
//	cout << " enter i";
//	cin >> i;
//	x = 2 * 3.14 * f * i;
//	cout << " enter x = " << x; cout << "\n";
//	float brackets;
//	brackets = x * (1 / x);
//	cout << "enter brackets = " << brackets; cout << "\n";
//	float sq;
//	sq = brackets * brackets;
//	cout << " enter sq = " << sq; cout << "\n";
//	float r;
//	cout << " enter r = ";
//	cin >> r;
//	float rSq;
//	rSq = r * r;
//	cout << " rSq = "<< rSq;
//	float y;
//	y = rSq + sq;
//	cout << " enter y = "<< y;
//	float u;
//	float sqrt,y;
//	u =sqrt(y);
//	float e;
//	cout << " enter e = ";
//	
//	float current;
//	current = e / sqrt(y);
//	cout << " current = " << current;
//	system("pause");
//	return 0;
//
//
//
//
//}



//question 10



//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cout << " enter character = ";
//	cin >> ch;
//	if (ch >= 97 && ch <= 122)
//		cout << " it is an english small case alphabet ";
//	else if (ch >= 65 && ch <= 90)
//		cout << " it is an english upper case alphabet";
//	else
//		cout << " invalid input ";
//	return 0;
//
//
//}


//question 11
//



//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a = 5;
//    int b = 12;
//    cout << " before swapping ";
//    cout << " a = " << a; cout << "\n";
//    cout << " b = " << b; cout << "\n";
//
//    int temp;
//    temp = b;
//    b = a;
//    a = temp;
//    cout << " after swapping ";
//    cout << " a = " << a; cout << "\n";
//    cout << " b = " << b; cout << "\n";
//    system("pause");
//    return 0;
//
//}



//question 13





//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int p;
//	int r;
//	int t;
//	cout << "enter principle = ";
//	cin >> p;
//	cout << " enter rate = ";
//	cin >> r;
//	cout << " enter time = ";
//	cin >> t;
//	float compountI;
//	compountI = p * pow((1 + r / 100), 100 * t) - p;
//	cout << " compound interest = " << compountI; cout << "\n";
//	float compoundP;
//	compoundP = p * pow((1 + r / 100), 100 * t);
//	cout << " the interest after compounded for the amount" << p << " for " << t << " years @" << r << " % is :" <<compountI; cout << "\n";
//
//	cout << " the total amount after compounded for the amount " << p << " for " << t << " years @ " << r << " % is :" << compoundP; cout << "\n";
//	return 0;
//
//}





//question 14    rate mai masla kia h???







//#include<iostream>
//using namespace std;
//#include<math.h>
//int main()
//{
//	float rate, loanAmount, monthly, noOfPayments, payment;
//	cout << " enter rate = ";
//	cin >> rate;
//	cout << " enter loan amount =     $";
//	cin >> loanAmount;
//	cout << " enter monthly interest rate =     %";
//	cin >> monthly;
//	cout << " enter number of payments = ";
//	cin >> noOfPayments;
//	int x;
//	x = pow((1 + rate), noOfPayments); 
//	cout << " enter x = " << x; cout << "\n";
//	int y;
//	y = rate * x / (x - 1);
//	cout << " enter y = " << y; cout << "\n";
//	payment = y * loanAmount;
//	cout << " enter payment ($)= " << payment; cout << "\n";
//	float paidBack;
//	paidBack = noOfPayments * payment;
//	cout << " enter monthly paid back =   $" << paidBack; cout << "\n";
//	float interestPaid;
//	interestPaid = (noOfPayments * payment) - loanAmount;
//	cout << " enter interest paid = " << interestPaid; cout << "\n";
//	
//	
//	system("pause");
//	return 0;
//
//
//}







//question 15 









//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	const double YEN_PER_DOLLAR = 98.93 ;
//	const double EUROS_PER_DOLLAR = 0.74 ;
//	double USdollars;
//	cout << " enter US Dollars = ";
//	cin >> USdollars;
//	
//	double JapaneseYen;
//	double JapeneseEuros;
//	
//	JapaneseYen = USdollars * YEN_PER_DOLLAR;
//	cout << " enter US Dollars to Japenese Yen = "<< JapaneseYen; cout << "\n";
//	cout << "setprecision(2)" << fixed; cout << "\n";
//	JapeneseEuros = USdollars * EUROS_PER_DOLLAR;
//	cout << " enter US Dollars to Japenese Yen =" << JapeneseEuros; cout << "\n";
//	cout << "setprecision(2)" << fixed; cout << "\n";
//	
//
//
//	return 0;
//}





//question 17




//#include<iostream>
//using namespace std;
//int main()
//{
//	float payRate;
//	cout << " enter payrate = ";
//	cin >> payRate;
//	int hours;
//	cout << " enter number of hours = ";
//	cin >> hours;
//	float totalAmount;
//	totalAmount = (payRate * hours) * 5;
//	cout << "enter total amount = " << totalAmount; cout << "\n";
//	float afterTax;
//	afterTax = totalAmount * 0.14;
//	cout << " enter amount after tax = " << afterTax; cout << "\n";
//	float moneyClothes;
//	moneyClothes = afterTax * 0.10;
//	cout << " enter money after clothes = " << moneyClothes; cout << "\n";
//	afterTax = afterTax - moneyClothes;
//	cout << " enter updated amount = " << afterTax; cout << "\n";
//	float schoolSupplies;
//	schoolSupplies = afterTax * 0.01;
//	cout << " enter amount after school supplies = " << schoolSupplies; cout << "\n";
//	afterTax = afterTax - schoolSupplies;
//	cout << " enter updated amount after tax = " << afterTax; cout << "\n";
//	float savingBonds;
//	savingBonds = afterTax * 0.25;
//	cout << " enter amount of saving bonds = " << savingBonds; cout << "\n";
//	afterTax = afterTax - savingBonds;
//	cout << " enter updated amount after tax = " << afterTax; cout << "\n";
//	float additionalSavings;
//	additionalSavings = savingBonds * 0.50;
//	cout << " enter additional savings = "<<additionalSavings; cout << "\n";
//
//
//
//
//	return 0;
//}















//#include<iostream>
//using namespace std;
//#include<stdio.h>
//
//int main()
//{
//	int x;
//	cout << " enter x = ";
//	cin >> x;
//	cout << "( integer \t square \t cube )"; cout << "\n";
//	float square, cube;
//	square = x * x;
//	cube = x * x * x;
//	cout << " x \t\t x * x \t\t x * x * x " << endl;;
//	cout<<" "<< x << "\t\t" <<" "<< square << "\t\t" <<" "<< cube;
//	cout << "\n";
//
//
//
//
//	return 0;
//}





//question 16




//
////
////
////#include<iostream>
////using namespace std;
////#include<iomanip>
////#include<cmath>
////int main()
////{
////	double angle;
////	cout << " enter angle in radians = ";
////	cin >> angle;
////	cout <<  setprecision(4) << fixed << endl;
////	cout << " enter sine of the angle = " << sin(angle) << endl;
////	cout << " enter cosine of the angle = " << cos(angle) << endl;
////	cout << " enter tangent of the angle = " << tan(angle) << endl;
////	return 0;
////}
////
////



//question18







//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int ONEGALLONSQUAREFEET = 120;
//	float dLength;
//	float dWidth;
//	cout << "Enter the length of the door = ";
//	cin >> dLength;
//	cout << "Enter the width of the door: ";
//	cin >> dWidth;
//	float wLengthF;
//	float wWidthF;
//	cout << "Enter the length of the first window: ";
//	cin >> wLengthF;
//	cout << "Enter the width of the first window: ";
//	cin >> wWidthF;
//	float wLengthS;
//	float wWidthS;
//	cout << "Enter the length of the second window: ";
//	cin >> wLengthS;
//	cout << "Enter the width of the second window: ";
//	cin >> wLengthS;
//	float shelfLen;
//	float shelfWid;
//	cout << "Enter the length of the bookshelf: ";
//	cin >> shelfLen;
//	cout << "Enter the width of the bookshelf: ";
//	cin >> shelfWid;
//	float roomLength;
//	float roomWidth;
//	float roomHeight;
//	cout << "Enter the length of the room: ";
//	cin >> roomLength;
//	cout << "Enter the width of the room: ";
//	cin >> roomWidth;
//	cout << "Enter the height of the room: ";
//	cin >> roomHeight;
//	float dArea;
//	dArea = dLength * dWidth;
//	cout << " enter area of door = " <<dArea;
//
//	float fWArea;
//	fWArea = wLengthF * wWidthF;
//	cout << " enter area of first window = "<< fWArea;
//
//	float sWArea;
//	sWArea = wLengthS * wLengthS;
//	cout << " enter area of second window = "<< sWArea;
//	float wBothArea;
//	wBothArea = fWArea + sWArea;
//	cout<<" enter total area of both windows = "<< wBothArea;
//
//	float shelfArea;
//	shelfArea = shelfLen * shelfWid;
//	cout << " enter area of shelf = "<< shelfArea;
//
//	float roomArea;
//	roomArea = roomLength * roomWidth * roomHeight;
//	cout << " enter area of room = "<< roomArea;
//
//	float paint;
//	paint = (roomArea - (dArea + wBothArea + shelfArea)) / ONEGALLONSQUAREFEET;
//	cout << " enter total amount of paint that has to be needed =" << paint;
//	 
//	return 0;
//
//}















//question 20








//#include<iostream>
//using namespace std;
//int main()
//{
//	float nCalories;
//	cout << " enter number of calories in one pound of nuts = ";
//	cin >> nCalories;
//	float dCalories;
//	dCalories = nCalories / 0.70;
//	cout << " enter number of calaries in one pound of fruits = " << dCalories<<endl;
//	int students;
//	cout << " enter number of students = ";
//	cin >> students;
//	float studentsCal;
//	cout << " enter required calories for each student = ";
//	cin >> studentsCal;
//	float totalcal;
//	totalcal = students * studentsCal;
//	
//	float amountnuts, amountfruits;
//	amountnuts = totalcal / nCalories;
//	amountfruits = totalcal / dCalories;
//	cout << " enter amount of nuts for students = " << amountnuts << endl;
//	cout << " enter amount od fruits for students = " << amountfruits << endl;
//	return 0;
//}




//question 2



//
//#include<iostream>
//using namespace std;
//int main()
//{ 
//	int num1 = 0;
//	int num2 = 1;
//	int num3 = 2;
//	int num4 = 3;
//	int num5 = 4;
//	int num6 = 5;
//
//	cout << " integer \t square \t cube " << endl;
//	cout << 0 << "     \t           " << 0 * 0 << "     \t      " << 0 * 0 * 0 << endl;
//	cout << 1 << "     \t           " << 1 * 1 << "     \t      " << 1 * 1 * 1 << endl;
//	cout << 2 << "     \t           " << 2 * 2 << "     \t      " << 2 * 2 * 2 << endl;
//	cout << 3 << "     \t           " << 3 * 3 << "     \t      " << 3 * 3 * 3 << endl;
//	cout << 4 << "     \t           " << 4 * 4 << "     \t      " << 4 * 4 * 4 << endl;
//	cout << 5 << "     \t           " << 5 * 5 << "     \t      " << 5 * 5 * 5 << endl;
//
//	return 0;
//
//
//
//}
//
