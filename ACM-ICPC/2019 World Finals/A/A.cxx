#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    vector<tuple<int, int>> back ;
    vector<tuple<int, int>> front;

    cin >> n;
    getInput(&back, &front, n);

    sort(back.begin(), back.end());
    sort(front.begin(), front.end());


    return 0;
}

void getInput(vector<tuple<int, int>> *back, vector<tuple<int, int>> *front, int n)
{
    vector<int> priceBack = {};
    vector<int> priceFront = {};
    vector<int> heightBack = {};
    vector<int> heightFront = {};

    for (auto i = 0; i < n; ++i)
    {
        auto temp = 0;
        cin >> temp;
        priceBack.push_back(temp);
    }
    for (auto i = 0; i < n; ++i)
    {
        auto temp = 0;
        cin >> temp;
        heightBack.push_back(temp);
    }
    for (auto i = 0; i < n; ++i)
    {
        back->push_back(tuple<int, int>(priceBack[i], heightBack[i]));
    }

    for (auto i = 0; i < n; ++i)
    {       
        auto temp = 0;
        cin >> temp;
        priceFront.push_back(temp);
    }
    for (auto i = 0; i < n; ++i)
    {
        auto temp = 0;
        cin >> temp;
        heightFront.push_back(temp);
    }
    for (auto i = 0; i < n; ++i)
    {
        front->push_back(tuple<int, int>(priceFront[i], heightFront[i]));
    }
    return;
}
