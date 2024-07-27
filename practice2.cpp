#include <iostream>
#include"stdlib.h"
#include"ctime"

using namespace std;
int charges(int no_of_days, int daily_rate, int medication_charges, int charges_for_hospital_services)
{
    int total_charges = no_of_days * (daily_rate + medication_charges + charges_for_hospital_services);
    return total_charges;
}
int charges(int lab_tests, int hospital_medication_charges)
{
    int total_charges = lab_tests + hospital_medication_charges;
    return total_charges;
}

void input(int a[],int size)
{
    for(int i=0;i<size;i++)
        a[i]=rand()%size;
}
void output(int a[],int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}
int even_count(int a[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
            count++;
    }
    return count;
}
float mean(int a[], int size)
{
    float mean = 0;
    int k=0;
    for(int i = 0;i<size;i++)
    {
        mean+=a[i];
        k=i;
    }
    mean/=k;
    return mean;
}

void input2(int array[][4],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            array[i][j]=rand()%10;
    }
}
void output2(int array[][4],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout<<array[i][j]<<" ";
        cout<<endl;
    }
}
void transpose(int array[][4],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            cout<<array[j][i]<<" ";
        cout<<endl;
    }
}

int main()
{
    //Task 01
    // cout << "1. Inpatient" << endl;
    // cout << "2. Outpatient" << endl;
    // int choice;
    // cin >> choice;
    // if (choice == 1)
    // {
    //     int no_of_days, daily_rate, medication_charges, charges_for_hospital_services;
    //     cout << "Number of days in hospital : ";
    //     cin >> no_of_days;
    //     cout << "Daily rate : ";
    //     cin >> daily_rate;
    //     cout << "Medication charges : ";
    //     cin >> medication_charges;
    //     cout << "Hospial service charges (lab tests etc.) : ";
    //     cin >> charges_for_hospital_services;
    //     cout << "Total charges : " << charges(no_of_days, daily_rate, medication_charges, charges_for_hospital_services);
    // }
    // else
    // {
    //     int lab_tests, medication_charges;
    //     cout << "Medication charges : ";
    //     cin >> medication_charges;
    //     cout << "Hospital service charges : ";
    //     cin >> lab_tests;
    //     cout << "Total charges : " << charges(lab_tests, medication_charges);
    // }

    //Task 02

    srand(time(0));
    // int size;
    // cout<<"Enter the size of the array : ";
    // cin>>size; 
    // int a[size];
    // input(a,size);
    // output(a,size);
    // cout<<endl<<"Even numbers in array are : "<<even_count(a,size)<<endl;
    // cout<<endl<<"Mean of array is : "<<mean(a,size)<<endl;


    //Task 03
    // int rows=0,columns=0;
    // int arr[rows][columns];
    // cout<<"Enter rows of the array : ";
    // cin>>rows; 
    // cout<<"Enter columns of the array : ";
    // cin>>columns; 
    // arr[rows][columns];
    // input2(arr,rows,columns);
    // output2(arr,rows,columns);
    // cout<<endl<<"Transpose "<<endl;
    // transpose(arr,rows,columns);
   
    return 0;

}
