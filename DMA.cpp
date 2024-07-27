#include<iostream>
using namespace std;
void display(const int array[],const int size)
{
    for(int i = 0; i < size;i++)
    {
        cout<<array[i]<<" ";
    }
}
int* duplicate(int *arr,const int size)
{
    int* Array=new int[size];
    for(int i=0;i<size;i++){
        Array[i]=arr[i];
    }
    return Array;
}
int main()
{
    const int s1=5,s2=7,s3=9;
    int a1[s1]={1,2,3,4,5};
    int a2[s2]={1,2,3,4,5,6,7};
    int a3[s3]={1,2,3,4,5,6,7,8,9};
    int *dup1, *dup2,*dup3;
    cout<<"Original arrays are : "<<endl;
    cout<<"Array 1 "<<endl;
    display(a1,s1);
    cout<<endl<<"Array 2 "<<endl;
    display(a2,s2);
    cout<<endl<<"Array 3 "<<endl;
    display(a3,s3);

    cout<<endl<<"Duplicating arrays"<<endl;
    dup1=duplicate(a1,s1);
    dup2=duplicate(a2,s2);
    dup3=duplicate(a3,s3);

    cout<<"Duplicate Array 1 "<<endl;
    display(dup1,s1);
    cout<<endl<<"Duplicate Array 2 "<<endl;
    display(dup2,s2);
    cout<<endl<<"Duplicate Array 3 "<<endl;
    display(dup3,s3);
    delete[] dup1;
    delete[] dup2;
    delete[] dup3;
    dup1=0;
    dup2=0;
    dup3=0;
    return 0;
}