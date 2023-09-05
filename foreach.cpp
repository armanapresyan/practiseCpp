#include <iostream>

void print(int elem){
	std::cout << elem << std::endl;
}

void for_each(int* start, int* end, void (*print)(int)){
	for(int* it = start; it != end; ++it){
		print(*it);
	}
}

int main(){
	int arr[4] = {1,23,4,5};
	for_each(arr, arr+4, print);
	return 0;

}
