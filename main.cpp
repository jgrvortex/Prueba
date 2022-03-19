#include<iostream>
using namespace std;
int main(){
	int numbers[10] {2,5,13,2,65,3,1,345,3,1};
	int largest, smallest, average;
	for(int a=0; a<numbers.length(); a++){
		if(a==0){
			largest = numbers[a];
		}
		else{
			if(numbers[a] > largest){
				largest = numbers[a];
			}
		}
		if(a==0){
			smallest = numbers[a];
		}
		else{
			if(numbers[a] < smallest){
				smallest = numbers[a];
			}
		}
	}
	int sum = 0;
	for(int a=0; a<numbers.length(); a++){
		sum += numbers[a];
	}
	double avg = sum / numbers.length();
	std::cout << "The numbers of the set are:" << std::endl;
	for(int a=0; a<numbers.length(); a++){
		std::cout << numbers[a] << "  ";
	}
}
