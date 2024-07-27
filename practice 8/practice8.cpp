#include "iostream"
#include "cmath"
using namespace std;
class Cuboids {
private:
	float height;
	float width;
	float depth;
public:
	Cuboids()
	{
		height = 1;
		width = 1;
		depth = 1;
	}
	Cuboids(float height, float width, float depth)
	{
		this->height = (height >= 0 && height <= 35.00) ? height : 1;
		this->width = (width >= 0 && width <= 35.00) ? width : 1;
		this->depth = (depth >= 0 && depth <= 35.00) ? depth : 1;
	}
	Cuboids(float height, float width)
	{
		this->height = (height >= 0 && height <= 35.00) ? height : 1;
		this->width = (width >= 0 && width <= 35.00) ? width : 1;
		depth = 1;
	}
	Cuboids(Cuboids &obj)
	{
		height = obj.height;
		width = obj.width;
		depth = obj.depth;
	}
	void setheight(float height)
	{
		this->height = (height >= 0 && height <= 35.00) ? height : 1;
	}
	void setwidth(float width)
	{
		this->width = (width >= 0 && width <= 35.00) ? width : 1;
	}
	void setdepth(float depth)
	{

		this->depth = (depth >= 0 && depth <= 35.00) ? depth : 1;
	}
	float getheight()
	{
		return height;
	}
	float getwidth()
	{
		return width;
	}
	float getdepth()
	{
		return depth;
	}
	void setCuboids(float height, float width, float depth) {
		setheight(height);
		setwidth(width);
		setdepth(depth);
	}
	void setCuboids() {
		cout << "Enter height : ";
		cin >> height;
		cout << "Enter width : ";
		cin >> width;
		cout << "Enter depth : ";
		cin >> depth;
		setheight(height);
		setwidth(width);
		setdepth(depth);
	}
	void putCuboids()
	{
		cout << "Height : " << height << "\tWidth : " << width << "\tDepth : " << depth << endl;
	}
	float getSurfaceArea()
	{
		return (2 * (height * width) + 2 * (height * depth) + 2 * (width * depth));
	}
	float getVolume()
	{
		return height * width * depth;
	}
	float getSpacediagonal()
	{
		return sqrt((height * height) + (width * width) + (depth * depth));
	}
	void putCuboidsInfo()
	{
		cout << "Surface Area : " << getSurfaceArea() << endl;
		cout << "Volume : " << getVolume() << endl;
		cout << "Space Diagonal : " << getSpacediagonal()<<endl;
	}
	~Cuboids()
	{
		cout << "Destructor Executed " << endl;
	}
};
int main()
{
	Cuboids c1;
	c1.setdepth(20);
	c1.setheight(25);
	c1.setwidth(30);
	c1.getVolume();
	c1.getSpacediagonal();
	c1.getSurfaceArea();
	c1.putCuboids();
	c1.putCuboidsInfo();
	return 0;
}