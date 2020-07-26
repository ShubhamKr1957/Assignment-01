#include<iostream>
using namespace std;
int main()
{
    int n, rev=0;
    cout<<"Enter the number = ";
    cin>>n;
    int temp = n;
    while(temp)
    {
        rev = rev*10 + temp%10;
        temp  = temp/10;
    }
    if(rev==n)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
