#include <iostream>
using namespace std;

size_t string_size(const char* str);
char* sum_string(const char *str1,const char *str2);


int main()
{

    char string1[100];
    char string2[100];
    cout<<"input first string:";
    cin>>string1;
    cout<<"input second string:";
    cin>>string2;
    size_t strsize1=string_size(string1);
    size_t strsize2=string_size(string2);
    cout<<"First string size is "<<strsize1<<" elements."<<endl;
    cout<<"Second string size is "<<strsize2<<" elements."<<endl;
    char* stringsum = sum_string(string1,string2);
    cout<<"Strings together:"<<stringsum<<".";
    return 0;
}

size_t string_size(const char* str)
{
    size_t size = 0;
    while(str[size]!='\0')
        ++size;
    return size;
}

char* sum_string(const char *str1,const char *str2)
{
    size_t strsize1=string_size(str1);
    size_t strsize2=string_size(str2);
    char* str3 = new char[strsize1+strsize2+1];
    size_t i=0;
    for(;i<strsize1;i++)
        str3[i]=str1[i];
    for(;i<=strsize1+strsize2;i++)
        str3[i]=str2[i-strsize1];
    return str3;
}
