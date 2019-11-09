#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int octadecimal[100], num, i = 0, decimal = 0;
	
	cout << "~~~~~~~~~~ Octadecimal Conversion ~~~~~~~~~~" << endl;
	cout << "Enter Octadecimal Number: ";
	
	cin >> num;
	while (num > 0)
	{	
		octadecimal[i] = num%10;
		num = num/10;
		i++;
	}
	
	cout << endl << "\t";
	for(i = i - 1; i >= 0; i--){
		if(i != 0){
			cout << octadecimal[i] << "*" << "(8^" << i << ") + ";
		} else{
			cout << octadecimal[i] << "*" << "(8^" << i << ")";
		}
		decimal += octadecimal[i] * pow(8, i);
	}
	
	cout << "\n\nDecimal Value = " << decimal;
	
	return 0;
	
}
