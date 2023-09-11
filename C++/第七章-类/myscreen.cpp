#include"myscreen.h"
void test727()
{
    myscreen myScreen(5, 5, 'x');
    myScreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
}

int main()
{
    test727();

    return 0;
}