#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

double task_1(double num, char type_now, char type_translate);

double task_1(double num, char type_now, char type_translate)
{
    if (type_now == 'h' && type_translate == 'm')
    {
        return num * 60;
    }
    else if (type_now == 'm' && type_translate == 'h')
    {
        return num / 60;
    }
    else if (type_now == 's' && type_translate == 'h')
    {
        return num / 3600;
    }
    else
    {
        cout << "ERROR CALL FUNCTION TASK_1: UNKNOWN TRANSLATE FROM " << type_now << " TO " << type_translate << endl;
        return 0;
    }
}


int main()
{
    double res_1 = task_1(12, 's', 'm');

    cout << "Result TASK_1: " << res_1 << endl;

    return 0;
}