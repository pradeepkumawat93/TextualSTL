#include "Interface.h"
using namespace std;

int main() {
	cout << "-------------Stack--------" << endl;
	Stack<int> s(1);
	s.push(1);
	s.push(2);
	s.print();
	cout << "Empty::" << s.empty() << ", size::" << s.size() << endl;
	/*cout << "-------------OrdinaryQueue--------" << endl;
	{
		OrdinaryQueue<int> oq(12);
		oq.enqueue(1);
		oq.enqueue(2);
		oq.print();
	}*/
	

	system("pause");
	return 0;
}

