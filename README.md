# EXP-11
## Aim

- To study and implement Classes and Objects.  


## Software required-

You need to have a C++ compiler installed on your system. Common options include:

- [Microsoft Visual C++](https://visualstudio.microsoft.com/vs/features/cplusplus/)

## Theory
 Class -> A class is a usser-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. <br> 

Object-> When a class is defined, only the specification for the object is defined, no memory or storage is allocated. To use the data and access functions defined in the clss, we need to create objects. <br> 

In C++, there are three access specifiers that are: <br> 
(1) Public: Members declared as public can be accessed from outside the class. <br> 
(2) Private: Members declared as private can only be accessed within the class itself. <br>  
(3) Protected: Members declared as protected cn be accessed within the class and by derived classes. 
1. Global Variables:
- Declaration: A global variable is declared outside of all functions, usually at the top of a program.
- Scope: The scope of a global variable is the entire program, meaning it can be accessed and modified by any function within the same file or program.
- Lifetime: The lifetime of a global variable is the entire runtime of the program. It exists from the point of its declaration until the program ends.
2. Local Variables:
- Declaration: A local variable is declared inside a function or a block (e.g., within curly braces {}).
- Scope: The scope of a local variable is limited to the function or block in which it is declared. It cannot be accessed outside of that function or block.
- Lifetime: The lifetime of a local variable is limited to the execution of the function or block. Once the function or block ends, the local variable is destroyed
<br>    

##### Code 

(A) <br> 
```cpp

# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0;
    double b = 3.0;
    double l = 4.0;
};
int main()
{
  cuboid c1;
  double vol = c1.h * c1.b * c1.l;
  cout<<"Volume "<<vol<<endl;
}
```

### Output
<img width="615" alt="EXP 11 A OUTPUT" src="https://github.com/user-attachments/assets/e43d3c8f-8956-4156-a96d-38126179a6b0">

(B) <br> 
```cpp
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0,b = 3.0,l = 4.0;
    double volume()
    {
        double vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}
```
### Output
<img width="714" alt="EXP 11 B OUTPUT" src="https://github.com/user-attachments/assets/258c0cdc-608f-46a9-b065-9dca5d407239">

(C) <br> 
```cpp
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
```


### Output
<img width="613" alt="EXP 11 C OUTPUT" src="https://github.com/user-attachments/assets/08f90e3b-6920-4e3b-a57c-874d2d2264b2">


(D) <br> 
```cpp
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 2.0,b = 3.0,l = 4.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    double v = c1.volume();
    c1.disp(v);
  
}

```
### Output
<img width="611" alt="EXP 11 D OUTPUT" src="https://github.com/user-attachments/assets/04c28384-a755-4ebd-969a-2437c88c4094">


(E) <br> 
```cpp
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h,b,l;
    void input()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;
        cout<<"Enter the height: ";
        cin>>h;
    }
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    c1.input();
    double v = c1.volume();
    c1.disp(v);
  
}
```
### Output
<img width="623" alt="EXP 11 E OUTPUT" src="https://github.com/user-attachments/assets/c89b3a56-c90f-4168-bff3-e193fbe00c02">



## Conclusion
In this experiment, i learnt about classes and objects in C++ and performed programs using them and also learnt about local variables and global variables. 
