#include <iostream>
#include "insertionSort.h"
using namespace std;


void insertionSort::sort(){
	int temp = 0;
	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
void insertionSort::add(){
	int value;
	cout << "Enter a value (-1:end) : ";
	cin >> value;
	count = 0;
	while(value >= 0){
		array[count] = value;
		count++;
		cout << "Enter a value (-1:end) : ";
		cin >> value;		
	}
}
void insertionSort::write(){
	cout << "List of array : \n";
	for(int i=0;i<count;i++){
		cout << array[i] <<"\n";
	}
	
}

