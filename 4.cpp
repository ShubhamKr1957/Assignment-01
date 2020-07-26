#include<iostream>
using namespace std;
int main()
{
    string str;
    int flag=0;
    cout<<"Enter the string = ";
    cin>>str;
    for(int i=0; i<=str.size()/2; i++)
    {
        if(str[i] != str[str.size()-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not A Palindrome";
    }
    return 0;
}
