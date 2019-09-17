// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/17/19

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string movieName;
	int adultTickets;
	int childTickets;
	double adultPrice = 10.00;
	double childPrice = 6.00;
	double grossProfit;
	double netProfit;
	double distProfit;

	cout << setprecision(2) << fixed;

    cout << "Please enter the name of the movie that you'd like to calculate profits for: ";
	getline(cin, movieName);

	cout << "Please enter the number of adult tickets sold: ";
	cin >> adultTickets;

	cout << "Please enter the number of child tickets sold: ";
	cin >> childTickets;

	grossProfit = (adultPrice * adultTickets) + (childPrice * childTickets);
	netProfit = grossProfit * 0.2;
	distProfit = grossProfit - netProfit;

	cout << "\n" << movieName << " had a gross profit of: $" << grossProfit;
	cout << "\nThe theater made a profit of: $" << netProfit;
	cout << "\nThe theater paid the movie's distributor: $" << distProfit << "\n";
}
