/*
 * Christopher Tiso and Bobby Stahl
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
void LeapYear();
void TimesTable(int num);
void OneToTwelve();
void CollatzCheck(int small,int big);
void PrintX(int num);

int main(){
	cout <<"HELLO WORLD"<< endl;
	//The function checks if the number given is a prime number or not
	//isPrime(11)->1 isPrime(24)->0  isPrime(83)->1
	cout << isPrime(11)<< endl;
	cout << isPrime(24)<< endl;
	cout << isPrime(83)<< endl;
	//This should print out the sum of 1 to 300 which is 45150 as well as print 15 numbers in between at 20 term differences
	sumThreeHundred();
	//This counts how many times it takes to sum consecutive numbers together until they pass 100,000
	cout<<sumToHundredGrand()<<endl;
	//This Multiplies a given number from 1 to 12
	TimesTable(5);
	TimesTable(3);
	TimesTable(10);
	//This Prints out the times table between 1 and 12
	OneToTwelve();
	//This will find out how many loops it takes to make the Collatz conjecture hold true
	Collatz();
	//This finds every leap year for the next 400 years
	LeapYear();
	//Checks Collatz Conjecture at every number including and between these numbers
	CollatzCheck(6,8);
	 PrintX(4);
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
void TimesTable(int num){
	for(int mult=1;mult<=12;mult++){
		cout<< mult*num;
		cout<< " ";
	}
	cout<<""<<endl;
}

void OneToTwelve(){
	for(int count =1;count<=12;count++){
		TimesTable(count);
	}
}

void  Collatz(){
	 int num;
	 cout<<"Type Number for Collatz"<< endl;
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
void LeapYear(){
	int year=2019;
	while(year<=2419){
		if(year%4==0){
			if(year%100==0){
				if(year%400==0){
					cout << year << endl;
				}
			}
			else{
				cout << year << endl;
			}
		}
		year++;
	}
}
void PrintX(int num){
	if(num%2==0){
		num++;
	}
	int total=num*2 -1;
	for(int starCount=0;starCount<=total;starCount++){

	}
}

void CollatzCheck(int small,int big){
	while(small<=big){
		int num=small;
		while(num !=1){
				 if(num%2 ==0){
					 num=num/2;
				 }
				 else{
					 num=(num*3)+1;
				 }

		}
		small++;
		cout << "Collatz Conjecture is still working"<< endl;
	}

}
