#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(0));
	
	int secret, guess, count=50;
	secret = rand() % 50 + 1;
	cout<<"                                        -!!WELCOME TO THE GUESSING GAME!!-"<<endl;
	cout<<"                                           ----------------------------"<<endl;
	cout<<"Guess the SECRET number between 1 and 50:"<<endl;
	cin>>guess;
	while(guess != secret){
	
	if(guess > secret){
		cout<<"Your guess is too high!!!     TRY AGAIN!!!"<<endl;
		
	}else{
		cout<<"Your guess is too low!!!      TRY AGAIN!!!"<<endl;
	}
		
		cin>>guess;
		--count;
	}  
		cout<<"                          CONGRATULATIONS! YOU GUESSED THE SECRET NUMBER!!!!!!"<<endl;
		cout<<"                          ____________________________________________________"<<endl;
		cout<<"Your total score is => "<<count<<endl;
	return 0;
}
