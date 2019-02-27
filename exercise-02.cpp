/*
* Author: Gede Bagus D
*NPM: 140810180068
*Deskripsi: Convert Celcius to Fahrenheit
*Tahun: 2019
*/

#include <iostream>
using namespace std;

float cel2Fah (float celcius){
	return (celcius*9/5)+32;
}

int main(){
	int celcius =9;
	float fahrenheit = cel2Fah (celcius);
	cout<<"temp is = "<<fahrenheit;
}
