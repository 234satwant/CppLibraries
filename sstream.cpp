#include<iostream>
#include<sstream>

using namespace std;

int main()
{
        stringstream os;
        os<<"hello 990";
        char str[50]="p";
        int number=8;
        cout<<str<<endl<<number<<endl<<os.str()<<endl;
        os>>str>>number;
        cout<<"String is "<<str<<endl<<"Number is "<<number;
}
