#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int aList[n], bList[n], cList[n];
    vector<int> plusVector, minusVector;
    long totalPlus = 0 , totalMinus = 0;
    for(int i = 0; i < n; i++) {
        cin >> aList[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> bList[i];
    }
    for(int i = 0; i < n; i++) {
        cList[i] = aList[i] - bList[i];
    }
    for(int i = 0; i < n; i++) {
        if(cList[i] >= 0) {
            plusVector.push_back(cList[i]);
        } else {
            minusVector.push_back(cList[i]);
        }
    }
    for(int i = 0; i < plusVector.size(); i++) {
        totalPlus += plusVector[i];
    }
    int changeCount = 0;
    for(int i = 0; i < minusVector.size(); i++) {
        totalMinus += minusVector[i];
        changeCount++;
    }
    if(totalPlus + totalMinus < 0) {
        cout << "-1" << endl;
        return 0;
    }
    sort(plusVector.begin(), plusVector.end(), greater<int>());
    for (int i = 0; i < plusVector.size(); i++) {
        if (totalMinus >= 0) {
            cout << changeCount << endl;
            return 0;
        }
        totalMinus += plusVector[i];
        changeCount++;
    }

    cout << changeCount << endl;
    return 0;
}
