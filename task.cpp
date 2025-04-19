#include <iostream>
#include <limits.h>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    // cout << "------------ Push_To_Vector ---------------\n";
    //     vector<string> vst = {"Habiba","Ahmed","Moustafa"};
    //     // int sizev= size(vectst);
    //     // cout << sizev;
    //     vector<string> result = Push_To_Vector(vst,"Ahmed");
    //     for (string s : result) 
    //     {
    //         cout << s << " ";
    //     }

    vector<int> numcandles;
    int num ,candles;
    cout << "Enter number of candles";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> candles;
        numcandles.push_back(candles);
    }
    for (int i = 0; i < numcandles.size(); ++i) {
        cout << numcandles[i] << " ";
    }
    
    return 0;
}