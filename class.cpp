#include <iostream>
using namespace std;
class students{

    public:
    //data memberrs
    string name;
    int roll_no;
    int year;
    //member functions
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"roll_no:"<<roll_no<<endl;
        cout<<"year:"<<year<<endl;
    }

    };
    int main()
{
    students s1;
    s1.name="Shantanu";
    s1.roll_no=0003;
    s1.year=2025;
    s1.show();

    return 0;
}


