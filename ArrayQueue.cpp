#include <iostream>
#include <string>

using namespace std;

class ArrayQueue
{
	protected:
		int *data;
		long arraySize;
		long top;

		void create(int sz)
		{
			this->data = new int[sz];
			this->arraySize = sz;
			this->top = 0;
		}

		void increaseSize()
		{
			// will be implemented later
		}
	public:
		ArrayQueue()
		{
			this->create(10); // 10 is default size and can be changed
		}

		ArrayQueue(int sz)
		{
			this->create(sz);
		}

		~ArrayQueue()
		{
			delete[] this->data;
			this->data = NULL;
		}

		void enqueue(const int & e)
		{
			if(this->isFull())
			{
				this->increaseSize();
			}
			if(this->isFull())
			{
				throw string("ArrayQueue is full!!");
			}

			this->data[this->top] = e;
			this->top++;
		}

		int dequeue()
		{
			
		}

		int peek() const
		{
			if(this->isEmpty())
			{
				throw string("ArrayQueue is empty!!");
			}

			return this->data[this->top-1];
		}

		bool isEmpty() const
		{
			return (this->top == 0);
		}

		bool isFull() const
		{
			return (this->top == this->arraySize);
		}

		long size() const
		{
			return this->top;
		}
};


int main()
{
	ArrayQueue *s = new ArrayQueue;
	
	s->enqueue(12);
	s->enqueue(33);
	s->enqueue(28);
	s->enqueue(89);
	s->enqueue(44);
	cout << s->dequeue() << endl;
	s->enqueue(57);
	cout << s->dequeue() << endl;
	cout << s->dequeue() << endl;
	cout << s->peek() << endl;
	s->enqueue(94);
	cout << s->dequeue() << endl;
	cout << s->dequeue() << endl;
	cout << s->peek() << endl;
	//cout << s->dequeue() << endl;
	cout << s->dequeue() << endl;
	cout << (s->isEmpty() ? "Empty Queue" : "Non empty Queue") << endl;
	try
	{
		cout << s->dequeue() << endl;
	}
	catch(string s)
	{
		cout << "Exception caught: " << s << endl;
	}
	
	delete s;
	
	return 0;
}
