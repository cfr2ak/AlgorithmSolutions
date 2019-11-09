#include <iostream>

using namespace std;

unsigned long long loop(int, int, bool);

int main()
{
    int l{0}, k{0};
    cin >> l >> k;

    auto result = loop(l, k, true);
    cout << result << endl;

    return 0;
}

unsigned long long loop(int left, int k, bool is_black)
{
    if (left < 0)
    {
        return 0;
    }

    if (is_black == true)
    {
        int result_thin{0}, result_thick{0};

        result_thin = loop(left - 1, k, false);
        result_thick = loop(left - k, k, false);

        return result_thin + result_thick;
    }
    else
    {
        if (left == 0)
        {
            return 1;
        }
        else
        {
            return 1 + loop(left - 1, k, true);
        }
    }
}
