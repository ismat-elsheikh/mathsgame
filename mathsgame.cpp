#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;

int main() {
	cout <<"\n Hello world";
	srand (time(NULL)); // random seed
	int ans;
	int x = rand() % 10 + 1;
	int y = rand() % 10 + 1;
	cout << " \n Test your addition skill ";
	printf("\n %d + %d = ?? ",x,y) ;
	cin >> ans;
	if (ans != (x+y) )
		cout << "\n Wrong ";
	else
		cout << "\n Correct ";


	return 1;
}
