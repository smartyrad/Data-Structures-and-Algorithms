#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
	int numbers,odd_num,length;
	cout<<"Total number of elements in the array are:";
	cin>>length;
	int *array = new int[length];
	for (int i = 0; i<length ; ++i){
		cin>> numbers;
		array[i] = numbers;
	}
	cout<<"\n";
	cout << "The array is given by: [";
	int j;
	for (j = 0; j < length; ++j){
    	if (j != 0)
        	cout << ",";
    	cout << array[j];
	}
	cout << "] \n";
	if (count(array[j])/2 != 0 )
	    odd_num = array[j];
	cout<<"the odd number is :"<<odd_num;
	
}