#include <iostream>
#include <ctime>
using namespace std;
int co = 0;
void checknum(int num,int ran)
{
	if(num<ran)
		cout << "The secret number is higher"<< endl;
	else if(num>ran)
		cout << "The secret number is lower" << endl;
	else if(num == ran){
		cout << "Congratulations!\nThe secret number is "<<ran<< endl;
		cout << "You made " << co << " guesses"<<endl;}
}
int main()
{
	int n,r;
	srand((unsigned) time(NULL));
	r = (rand() % 10) + 1 ;
	cout << "###Welcome to guessing number game###\nSecret number has been chosen"<<endl;
	do{
	cout << "Guess the number (1 to 10): ";
	cin >> n;
	co++;
	checknum(n,r);
	}while (n!=r);
}
