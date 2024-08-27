//RIDDHI LOKHANDE
//23070123107
//EXP 11 A
#include<iostream>
using namespace std;
class cube{
    public:
    double height=2.0;
    double width=3.0;
    double length=5.0;

};

int main(){
    cube cl;
    double vol=cl.height*cl.width*cl.length;
    cout<<"Volume:"<<vol;
}