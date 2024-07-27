#include"iostream"
#include"vector"
using namespace std;
template<class T>
class GenericArray{
	T* array;
	int size;
public:
	GenericArray() :size(5)
	{
		array = new T[size]();
	}
	GenericArray(int size) :size(size)
	{
		this->size = (size > 0) ? size : 5;
		array = new T[size]();
	}
	GenericArray(const GenericArray& obj) :size(obj.size)
	{
		array = new T[size];
		for (int i = 0; i < size; i++)
			array[i] = obj.array[i];
	}
	~GenericArray()
	{
		delete[]array;
	}
	int getSize()
	{
		return size;
	}
	void setElement(int index, T value)
	{
		if (index >= 0 && index <= size - 1)
		{
			array[index] = value;
		}
		else {
			throw("Array index out of bound");
		}
	}
	int countElement(T key)
	{
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (array[i] == key)
				count++;
		}
		return count;
	}
	GenericArray operator=(const GenericArray& obj)
	{
		if (this != &obj&&this->size==obj.size)
		{
			for (int i = 0; i < size; i++)
				this->array[i] = obj.array[i];
		}
		if (this != &obj && this->size != obj.size)
		{
			delete[]this->array;
			this->size = obj.size;
			this->array = new T[size];
			for (int i = 0; i < size; i++)
				this->array[i] = obj.array[i];
		}
		return *this;
	}
	GenericArray operator+(const GenericArray& obj)
	{
		GenericArray obj2;
		int newsize;
		obj2.size = this->size + obj.size;
	
		obj2.array = new T[obj2.size];
		int j = 0;

		for (int i = 0; i < this->size; i++) {
			obj2.array[j] = this->array[i];
			j++;
		}
		for (int i = 0; i < obj.size; i++) {
			obj2.array[j] = obj.array[i];
			j++;
		}
		return obj2;
	}

	template<class t>
	friend ostream& operator<<(ostream& out, const GenericArray<t>& obj)
	{
		for (int i = 0; i < obj.size; i++)
			out << obj.array[i] << " ";
		out << endl;
		return out;
	}

	template<class t>
	friend istream& operator>>(istream& in, const GenericArray<t>& obj)
	{
		for (int i = 0; i < obj.size; i++)
			in>> obj.array[i];
		
		return in;
	}
	int& operator[](const int index)
	{
			if (index >= 0 && index < size)
			{
				return array[index];
			}
			else
				throw("Array index out of bound");
	}
	
	int& operator[](const int index)const
	{
		if (index >= 0 && index < size)
		{
			return array[index];
		}
		else
		{
			throw("Array index out of bound");
		}
	}
	bool operator==(const GenericArray& obj)
	{
		int count = 0;
		for (int i = 0; i < size; i++)
			if (this->array[i] == obj.array[i])
				count++;
		if (count == size)
			return true;
		return false;
	}
	GenericArray getSubArray(int start_index,int end_index) {
		GenericArray obj;
		if ((start_index >= 0 && start_index < size) && (end_index >= 0 && end_index < size))
		{
			if (end_index > start_index)
			{
				obj.size = (end_index - start_index)+1;
				int j = 0;
				obj.array = new T[obj.size];
				for (int i = start_index; i < end_index; i++)
					obj.array[j++] = this->array[i];
			}
			else {
				throw("Starting index must be greater than ending index");
			}

		}
		else {
			throw("Array index out of bound ");
		}
		return obj;
	}
};
int main()
{
	GenericArray<int> obj_int;
	GenericArray<int> obj_int2(-2);

	/*cout << obj_int;
	try {
		obj_int[3] = 8;
	cout << obj_int;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	obj_int = obj_int2;
	cout << obj_int;*/

	cout << "Enter elements in arrray 1 ";
	cin >> obj_int;
	cout << "Enter elements in arrray 2 ";
	cin>>obj_int2;
	/*
	if (obj_int == obj_int2)
		cout << "Arrays equal";
	else {
		cout << "Not equal";
	}*/
	try {
		(obj_int + obj_int2).setElement(11,14);
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}