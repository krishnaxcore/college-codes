#include <iostream>
using namespace std;

class Result
{
private:
    int rollNumber;
    int marks[5];

public:
    Result(int roll = 0)
    {
        rollNumber = roll;

        for (int i = 0; i < 5; i++)
        {
            marks[i] = 0;
        }
    }

    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    int total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }

        return sum;
    }

    bool compare(Result r)
    {
        return total() > r.total();
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    Result applyGrace(int grace)
    {
        Result result = *this;

        int remainingGrace = grace;

        for (int i = 0; i < 5 && remainingGrace > 0; i++)
        {
            int added = 5;

            if (added > remainingGrace)
                added = remainingGrace;

            result.marks[i] += added;
            remainingGrace -= added;
        }

        return result;
    }

    void display()
    {
        cout << "Roll Number: " << rollNumber << endl;

        cout << "Marks: ";

        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;
        cout << "Total Marks: " << total() << endl;
    }
};

Result findTopper(Result r1, Result r2, Result r3)
{
    Result topper = r1;

    if (r2.total() > topper.total())
        topper = r2;

    if (r3.total() > topper.total())
        topper = r3;

    return topper;
}

int main()
{
    Result r1, r2, r3;

    cout << "Enter Result 1:" << endl;
    r1.input();

    cout << "\nEnter Result 2:" << endl;
    r2.input();

    cout << "\nEnter Result 3:" << endl;
    r3.input();

    Result topper = findTopper(r1, r2, r3);

    cout << "\n----- Topper -----" << endl;
    topper.display();

    int grace;

    cout << "\nEnter grace marks (maximum 20): ";
    cin >> grace;

    if (grace < 0)
        grace = 0;

    if (grace > 20)
        grace = 20;

    Result revised = r1.applyGrace(grace);

    cout << "\n----- Result After Grace Marks -----" << endl;
    revised.display();

    return 0;
}