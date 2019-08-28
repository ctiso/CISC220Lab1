/*
 * Christopher Tiso
 * Agnijit Das
 *  8/27/29
 *     This file contains functions for lab 1. The functions aren’t necessarily related
 *      in any way other than that they are required for lab 1.
 */

#include<iostream>
using namespace std;


void Stars();
bool isPrime(int num);
int sumThreeHundred();
int sumToHundredGrand();
void Collatz();

int main(){
	cout <<"HELLO WORLD"<< endl;
	//This input of 11 should come out to 1 because it is a prime number
	cout << isPrime(11)<< endl;
	//This input of 24 should come out to 0 because it is not a prime number
	cout << isPrime(24)<< endl;
	//This input of 83 should come out to 1 because it is a prime number
	cout << isPrime(83)<< endl;
	//This should print out the sum of 1 to 300 which is 45150 as well as put 15 numbers in between at 20 term differences
	sumThreeHundred();
	//
	cout<<sumToHundredGrand()<<endl;
	Collatz();
	Stars();
	return 0;
}



void Stars(){
	cout<<"********"<<endl;
}
bool isPrime(int num){
	bool prime=true;
	int test=2;
	while (test<= .5*num){
		if(num%test == 0){
			prime=false;
		}
		test++;
	}
	return prime;
}
int sumThreeHundred(){
	int count=1;
	int sum=0;
	while (count<=300){
		sum+=count;
		if(count%20==0){
			cout<<sum<<endl;
		}
		count++;
	}
	return sum;
}
int sumToHundredGrand(){
	int sum=0;
	int count=1;
	while(sum<=100000){
		sum+=count;
		count++;
	}
	return count;
}
void  Collatz(){
	 int num;
	 cin >> num;
	 int loop=0;
	 while(num !=1){
		 if(num%2 ==0){
			 num=num/2;
			 loop++;
		 }
		 else{
			 num=(num*3)+1;
		 }
	 }
	 cout << loop << endl;
}

