#include <iostream>
#include <vector>


int main(){
	std::vector<int> v{10,20,30,40};
	std::vector<int>::iterator it = v.begin();
	std::vector<int>::iterator it_end = v.end();

	while(it != it_end){
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}
