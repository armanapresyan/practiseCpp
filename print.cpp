#include <iostream>


void print(int* start, int* end){
	while(start != end){
		std::cout<< *(start) <<std::endl;
		++start;
	}
}


int main(){
	int arr[4] = {1,2,3,4};
	print(arr, arr + 4);
	return 0;

}
