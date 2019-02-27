/*
* Author: Gede Bagus D
*NPM: 140810180068
*Deskripsi: Fizz Buzz
*Tahun: 2019
*/

#include <iostream>
using namespace std;

void fizzbuzz(){
	int n=100;
 	for (int i=1; i<=n; i++){
		if ((i%15)==0){
			cout<<"FizzBuzz\n";
		}
		else if ((i%3)==0){
			cout<<"Fizz\n";
		}
		else if ((i%5)==0){
			cout<<"Buzz\n";
		}
		else {
			cout<<i<<endl;
		}
	}
}

int main(){
	fizzbuzz();
}
