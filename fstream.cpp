#include<iostream>
#include<fstream>

using namespace std;

int main()
{
        ofstream myfile;
        myfile.open("write",ios::out);

        char data[100];
        cout<<"What's your name?";
        cin>>data;

        myfile<<"Your name is "<<data<<endl;

        cout<<"What's your age?";
        cin>>data;

        myfile<<"Your age is "<<data<<endl;

        myfile.close();
}
