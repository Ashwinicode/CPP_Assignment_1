/*7) Write a program in C++ to define a recursive and a non-recursive function for
computing sum of digits of a given integer n of any size.*/
#include<iostream>
using namespace std;
//function declarations
int digitSum_non_rec(long long);
int digitSum_recursive(long long);
int main()
{
    long long num;
    long sum = 0;
    cout << "Please Enter a Number: ";
    cin >> num;
    cout << "Digit Sum is " << digitSum_non_rec(num) << " by Non recursive function."<<endl;
    cout << "Digit Sum is " << digitSum_recursive(num) << " by Recursive function."<<endl;
    return 0;
}
//Non recursive function to find the Sum of the digits.
int digitSum_non_rec(long long n)
{
    long sum = 0;
    int temp;
    while(n != 0)
    {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}
//Recursive function to find the sum of the digits.
int digitSum_recursive(long long n)
{
    if(n == 0)
    {
        return 0;
    }
    return digitSum_recursive(n / 10) + (n % 10);
}
















