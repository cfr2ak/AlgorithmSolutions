#include <iostream>
#include <vector>

using namespace std;

vector<int[2]> getInput();
int getMaxHeight(vector<int[2]>);
int countMaxCircuitNumberAndPrune(int, vector<int[2]>&);

int main()
{
    auto verticalBlocks = getInput();
    auto maxHeight = getMaxHeight(verticalBlocks);

    auto count1 = countMaxCircuitNumberAndPrune(maxHeight, verticalBlocks);
    auto count2 = countMaxCircuitNumberAndPrune(maxHeight, verticalBlocks);
    cout << count1 + count2;
    return 0;
}

vector<int[2]> getInput()
{
    auto num_input = 0;
    vector<int[2]> vertical_blocks;

    cin >> num_input;

    for (auto i = 0; i < num_input; ++i)
    {
        auto dump = 0;
        int temp[2] {0, 0};
        cin >> dump >> temp[0] >> dump >> temp[1];
        vertical_blocks.push_back(temp);
        
    }

    return vertical_blocks;
}

int getMaxHeight(vector<int[2]> vertical_blocks)
{
    auto max_height = 0;
    for (auto it = vertical_blocks.begin(); it != vertical_blocks.end(); ++it)
    {
        if (*it[0] > max_height)
        {
            max_height = *it[0];
        }
    }
    return max_height;
}

int countMaxCircuitNumberAndPrune(int max_height, vector<int[2]>& vertical_blocks)
{
    auto max_count = 0;
    auto max_position = 0;

    for (auto i = 0; i <= max_height; ++i)
    {
        auto count = 0;
        for (auto it = vertical_blocks.begin(); it != vertical_blocks.end(); ++it)
        {
            if (*it[0] >= i && i >= *it[1])
            {
                count += 1;
            }
        }

        if (count > max_count)
        {
            max_count = count;
            max_position = i;
        }
    }

    for (auto it = vertical_blocks.begin(); it != vertical_blocks.end(); ++it)
    {
        if (*it[0] >= max_position && max_position >= *it[1])
        {
            vertical_blocks.erase(it);
        }
    }
    return max_count;
}


