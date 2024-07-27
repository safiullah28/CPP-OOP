#include <iostream>
using namespace std;
class IntegerSet {
private:
	int* array;
	const int size;
public:

	IntegerSet(int size) :size(size)
	{
		if (size > 0)
		{
			array = new int[size];
			for (int i = 0; i < size; i++)
				array[i] = 0;
		}
		else
			throw("Array index out of bound ");
	}

	IntegerSet(const IntegerSet& obj) :size(obj.size)
	{
		array = new int[size];
		for (int i = 0; i < size; i++)
			array[i] = obj.array[i];

	}

	~IntegerSet()
	{
		delete[]array;
	}

	friend ostream& operator<<(ostream& out, const IntegerSet& obj) 
	{
		if (obj.size > 0) {
			for (int i = 0; i < obj.size; i++)
			{
				out << obj.array[i] << " ";
			}
		}
		else {
			out << "---" << endl;
		}
		out << endl;
		return out;
	}
	friend istream& operator>>(istream& in, const IntegerSet& obj)
	{
		if (obj.size > 0) {
			for (int i = 0; i < obj.size; i++)
			{
				in>> obj.array[i];
			}
		}
	}

	IntegerSet operator=(const IntegerSet& obj)
	{
		if (this != &obj&&this->size==obj.size)
		{
			for (int i = 0; i < size; i++)
				this->array[i] = obj.array[i];
		}
		else if (this != &obj&&this->size!=obj.size)
		{
			delete[]this->array;
			array = new int[obj.size];
			for (int i = 0; i < obj.size; i++)
				this->array[i] = obj.array[i];
		}
		return *this;
	}

	
	IntegerSet unionofSets(const IntegerSet& obj1, const IntegerSet& obj2)
	{
		delete[]array;

	}
	bool operator==(const IntegerSet& obj)const
	{
		int count = 0;
		if (this->size == obj.size)
		{
			for (int i = 0; i < this->size; i++)
			{
				if (this->array[i] != obj.array[i])
					return false;
			}
		}
			return true;
	}

	int* operator!()
	{
		int* newarray = new int[size];
		int count = 0;
		for (int i = size-1; i >=0; i--)
		{
			newarray[count++] = array[i];
		}
		return newarray;
	}
	void insertElement(int k)
	{
		if (k >= 0 && k <= size - 1) {
			for (int i = 0; i < size; i++)
			{
				array[k] = 1;
			}
		}
	}
	void deleteElement(int k)
	{
		if (k >= 0 && k <= size - 1) {
			for (int i = 0; i < size; i++)
			{
				array[k] = 0;
			}
		}
	}
	int& operator[](const int k)
	{
		if (k >= 0 && k < size)
			return array[k];
		else
			cerr << "Index out of bound" << endl;
	}
	
	bool findElement(int key)
	{
		for (int i = 0; i < size; i++)
		{
			if (array[i] == key)
				return true;
		}
		return false;
	}
	bool isNullSet()
	{
		return this->size == 0;
	}


};
int main()
{
	try {
		IntegerSet obj1(-1), obj2(12);
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}