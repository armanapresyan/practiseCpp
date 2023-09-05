#include <iostream>
#include <vector>
#include <string>

template<typename T, typename F>
int count_if(T begin, T end, F func){
	int count{0};
	for(T it = begin; it != end; ++it){
		if(func(*it)){
			++count;
		}
	}
	return count;
}

int main(){
	int arr[4] = {-10, 20, 30, 40};
	std::vector<std::string> v{"hi", "mil"};

	std::cout << count_if(arr, arr + 4, [](int a) { return a > 0; }) << std::endl;
	std::cout << count_if(v.begin(), v.end(), [](std::string s) { return s.size() == 2; }) << std::endl;
	return 0;
}
