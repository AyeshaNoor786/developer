#include <iostream>
#include <string>

#include "Set.h"

using namespace std;

int main()
{
	Set<int> s;
	
	s.add(29);
	s.add(33);
	s.add(28);
	s.add(89);
	s.show();
	
	s.add(44);
	s.show();

	s.remove(33);
	s.show();
	
	cout << (s.isEmpty() ? "Empty Set" : "Non empty Set") << endl;
	
	return 0;
}