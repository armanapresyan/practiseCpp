#include <iostream>
#include <vector>

template<typename T>
void for_each(T begin, T end, void (*ptr)(int)){
	for(T it = begin; it != end; ++it ){
		ptr(*it);
	}
}


int main(){
	int arr[4] = {22,36,45,85};
	std::vector<int> v = {1,1,1,1,1};
	for_each(arr, arr + 4, [](int elem){
			std::cout << elem << std::endl;		 
			});

	for_each(v.begin(), v.end(), [](int elem){
			std::cout << elem << std::endl;		 
			});
	return 0;
}
