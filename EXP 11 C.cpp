// NAME - RIDDHI LOKHANDE 
// PRN - 23070123107
// EXPERIMENT - 11(C) 

# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 3.0,b = 2.0,l = 4.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}