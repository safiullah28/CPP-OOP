#include "iostream"

using namespace std;

class FeetInches
{
private:
    int feet;          // To hold a number of feet
    int inches;        // To hold a number of inches

    // Private member function to simplify the values in feet and inches
    void simplify()
    {
        if (inches >= 12)
        {
            feet += (inches / 12);
            inches = inches % 12;
        }

        else if (inches < 0)
        {
            feet -= ((abs(inches) / 12) + 1);
            inches = 12 - (abs(inches) % 12);
        }
    }

public:
    // Constructor
    FeetInches(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
        simplify();
    }

    // Copy constructor
    FeetInches(const FeetInches& right)
    {
        feet = right.feet;
        inches = right.inches;
        simplify();
    }

    // Mutator function to set feet
    void setFeet(int f)
    {
        feet = f;
    }

    // Mutator function to set inches
    void setInches(int i)
    {
        inches = i;
        simplify();
    }

    // Accessor function to get feet
    int getFeet() const
    {
        return feet;
    }

    // Accessor function to get inches
    int getInches() const
    {
        return inches;
    }

    // Overloaded + operator
    FeetInches operator + (const FeetInches& right)
    {
        FeetInches temp;

        temp.inches = inches + right.inches;
        temp.feet = feet + right.feet;
        temp.simplify();

        return temp;
    }

    // Overloaded - operator
    FeetInches operator - (const FeetInches& right)
    {
        FeetInches temp;

        temp.inches = inches - right.inches;
        temp.feet = feet - right.feet;
        temp.simplify();

        return temp;
    }

    // Overloaded * operator
    FeetInches operator * (const FeetInches& right)
    {
        FeetInches temp;

        temp.inches = inches * right.inches;
        temp.feet = feet * right.feet;
        temp.simplify();

        return temp;
    }

    // Overloaded prefix ++ operator
    FeetInches operator ++ ()
    {
        ++inches;
        simplify();

        return *this;
    }

    // Overloaded postfix ++ operator
    FeetInches operator ++ (int)
    {
        FeetInches temp(feet, inches);

        inches++;
        simplify();

        return temp;
    }

    // Overloaded prefix -- operator
    FeetInches operator -- ()
    {
        --inches;
        simplify();

        return *this;
    }

    // Overloaded postfix -- operator
    FeetInches operator -- (int)
    {
        FeetInches temp(feet, inches);

        inches--;
        simplify();

        return temp;
    }

    // Overloaded > operator
    bool operator > (const FeetInches& right) const
    {
        bool status;

        if (feet > right.feet)
            status = true;
        else if (feet == right.feet && inches > right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    // Overloaded < operator
    bool operator < (const FeetInches& right) const
    {
        return !(*this > right);
    }

    // Overloaded >= operator
    bool operator >= (const FeetInches& right) const
    {
        bool status;

        if (feet >= right.feet)
            status = true;
        else if (feet == right.feet && inches >= right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    // Overloaded <= operator
    bool operator <= (const FeetInches& right) const
    {
        return !(*this >= right);
    }

    // Overloaded == operator
    bool operator == (const FeetInches& right) const
    {
        bool status;

        if (feet == right.feet && inches == right.inches)
            status = true;
        else
            status = false;

        return status;
    }

    // Overloaded != operator
    bool operator != (const FeetInches& right) const
    {
        return !(*this == right);
    }

    // Friend function to overload << operator for output
    friend ostream& operator << (ostream&, const FeetInches&);

    // Friend function to overload >> operator for input
    friend istream& operator >> (istream&, FeetInches&);
};

// Overloaded << operator
ostream& operator << (ostream& out, const FeetInches& obj)
{
    out << "Feet = " << obj.feet << "\tInches = " << obj.inches << endl;

    return out;
}

// Overloaded >> operator
istream& operator >> (istream& in, FeetInches& obj)
{
    cout << "Enter Feet:\t";
    in >> obj.feet;

    cout << "Enter Inches:\t";
    in >> obj.inches;

    return in;
}


class RoomDimension {
private:

    FeetInches length;
    FeetInches width;

public:
    void setLength(FeetInches length)
    {
        this->length = length;
    }
    void setWidth(FeetInches width)
    {
        this->width = width;
    }
    FeetInches getLength()
    {
        return this->length;
    }
    FeetInches getWidth()
    {
        return this->width;
    }

    RoomDimension(FeetInches length, FeetInches width):length(length),width(width)
    {}

    void print()
    {
        cout << "Length : " << length << "\tWidth : " << width << endl;
    }

    FeetInches Area()
    {
        return length * width;
    }

    
};

class RoomCarpet {
private:
    RoomDimension roomSize;
    float costperSquarefeet;
public:
    void setroomSize(RoomDimension roomSize)
    {
        this->roomSize = roomSize;
    }

    void setcostpersquarefeet(float costperSquarefeet)
    {
        this->costperSquarefeet = costperSquarefeet;
    }

    float getcostpersquarefeet()
    {
        return costperSquarefeet;
    }

    RoomDimension getroomSize()
    {
        return this->roomSize;
    }

    RoomCarpet(RoomDimension roomSize, float costperSquarefeet):roomSize(roomSize),costperSquarefeet(costperSquarefeet)
    {}

    void print()
    {
        cout << "Cost per Square Foot : " << this->costperSquarefeet << endl;
        cout<<"\t\tRoom Size:" ; 
        this->roomSize.print();
    }

    float totalcost()
    {
        return this->costperSquarefeet * ((this->roomSize.getLength().getFeet() + ((float)this->roomSize.getLength().getInches()/12)) * (this->roomSize.getWidth().getFeet()+((float)this->roomSize.getWidth().getInches() / 12)));
    }

};
int main()
{
    FeetInches l1(12, 2),w1(10,6);
    ++l1;
    RoomDimension r1(l1, w1);

    cout<<"Area : "<<r1.Area() << endl;
    RoomCarpet c1(r1, 25.0f);

    cout<<"Total Cost : "<<c1.totalcost()<<endl;
    c1.print();

	return 0;

}