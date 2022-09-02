#include <iostream>
using namespace std;
class student
{
protected:
    int rollnum;

public:
    void setroll(int r)
    {
        rollnum = r;
    }
    void printroll()
    {
        cout << "the rollnumber is " << rollnum << endl;
    }
};

class test : virtual public student     //virtual class tells the compiler to take value one time
{                                      // in derieved class from 2 bse classes
protected:
    float maths, physics;

public:
    void setnumber(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void shownum()
    {
        cout << "the maths number are " << maths
             << " the physics number are " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void setscore(int s)
    {
        score = s;
    }
    void showscore()
    {
        cout << "the score is " << score << endl;
    }
};
class result : public test, public sports
{
protected:
    int final;

public:
    void print()
    {
        cout << "the result of roll number " << rollnum
             << " is sum of all sub " << maths + physics + score << endl;
    }
};
int main()
{
    result ravi;
    ravi.setroll(71);
    ravi.printroll();
    ravi.setnumber(95.4, 98.63);
    ravi.shownum();
    ravi.setscore(8);
    ravi.showscore();
    ravi.print();
    return 0;
}
