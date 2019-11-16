#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    vector<int> priceBack = {};
    vector<int> priceFront = {};
    vector<int> heightBack = {};
    vector<int> heightFront = {};

    cin >> n;
    getInput(&priceBack, &priceFront, &heightBack, &heightFront, n);

    return 0;
}

void getInput(vector<int> *priceBack, vector<int> *priceFront, vector<int> *heightBack, vector<int> *heightFront, int n)
{
    for (auto j = 0; j < n; ++j)
    {
        auto temp = 0;
        cin >> temp;
        priceBack->push_back(temp);
    }
    for (auto j = 0; j < n; ++j)
    {
        auto temp = 0;
        cin >> temp;
        priceBack->push_back(temp);
    }
    for (auto j = 0; j < n; ++j)
    {
        auto temp = 0;
        cin >> temp;
        priceBack->push_back(temp);
    }
    for (auto j = 0; j < n; ++j)
    {
        auto temp = 0;
        cin >> temp;
        priceBack->push_back(temp);
    }

}
