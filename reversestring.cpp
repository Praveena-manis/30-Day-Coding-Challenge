#include<iostream>
#include<string>
using namespace std;
void reverse(string s)
{
    int i,len;
    char tmp;
    len=s.length();
    for(i=0;i<len/2;i++)
    {
        tmp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=tmp;
    }
    cout<<"reverse string:"<<s<<endl;
}
int main()
{
    string str;
    cout<<"enter the string";
    getline(cin,str);
    reverse(str);
    return 0 ;
}
