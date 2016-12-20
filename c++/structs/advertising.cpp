#include <iostream>

struct Advertising
{
	int adsShown;
	double userClicks;
	double averageEarned;
};

void advertisingValues(Advertising advertising)
{
	using namespace std;
	cout << "The number of ads shows: " << advertising.adsShown << endl;
	cout << "The number of user clicks: " << advertising.userClicks << endl;
	cout << "The average earned: $" << advertising.averageEarned << endl;

	cout << "Total earnings: $" << (advertising.adsShown * advertising.userClicks / 100 * advertising.averageEarned) << endl;
}

int main()
{
	using namespace std;

	Advertising advertising;

	cout << "How many ads where shown today? ";
	cin >> advertising.adsShown;
	cout << "What percentage of users clicked on the ads? ";
	cin >> advertising.userClicks;
	cout << "What was the average earned per click? ";
	cin >> advertising.averageEarned;

	advertisingValues(advertising);

	return 0;
}
