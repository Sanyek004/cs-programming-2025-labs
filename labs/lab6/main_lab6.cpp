#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

double task_1(double num, char type_now, char type_translate);
double task_2(double sum, double age);
vector<unsigned int> task_3(int begin, int end);

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

double task_2(double sum, double age)
{
    double sum_bonus = 0;

    if (sum < 30000)
    {
        cout << "Minimum deposit: 30k!";
        return 0;
    }

    if (sum > 10000)
    {
        // (int) отбрасывает дробную часть, чтобы считать полные десятки тысяч
        sum_bonus = (int)(sum / 10000) * 0.3;

        if (sum_bonus > 5.0)
        {
            sum_bonus = 5.0;
        }

    }

    double current_sum = sum;

    for (int i = 1; i <= age; i++)
    {
        double current_year_rate = sum_bonus; 

        
        if (i <= 3) 
        {
            current_year_rate += 3.0;
        }
        else if (i >= 4 && i <= 6) 
        {
            current_year_rate += 5.0;
        }
        else 
        {
            current_year_rate += 2.0;
        }

        current_sum += current_sum * (current_year_rate / 100.0);

        current_sum = round(current_sum * 100) / 100.0;
    }

    return current_sum - sum;
}

vector<unsigned int> task_3(int begin, int end)
{
    vector<unsigned int> task_3;

    if (end < 2) 
    {
        cout << "Error!";
        return task_3;
    }

    if (begin < 2) {
        begin = 2;
    }

    for (int n = begin; n <= end; ++n) 
    {
        bool is_prime = true;
        
        for (int i = 2; i * i <= n; ++i) 
        {
            if (n % i == 0) 
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime) 
        {
            task_3.push_back(n);
        }
    }


    cout << "Simple numbers: ";
    for (auto it = task_3.begin(); it != task_3.end(); it++)
    {
        cout << " " << *it << " ";
    }

    return task_3;

}


int main()
{
    double res_1 = task_1(12, 's', 'm');
    double res_2 = task_2(200000, 8);
    task_3(0,1);

    cout << "Result TASK_1: " << res_1 << endl;
    cout << "Result TASK_2: " << fixed << setprecision(2) << res_2 << endl;

    return 0;
}