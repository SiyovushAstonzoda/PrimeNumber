#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num,counter;
    cout<<"Input a number to check prime or not: ";
    cin>>num;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            counter++;
        }
    }
    if(counter > 2)

        cout<<"The entered number is not a prime number";
    else
        cout<<"The entered number is a prime number";
}
