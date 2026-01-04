#include <bits/stdc++.h>
using namespace std;

void sortByFrequency(vector<int>& nums) {

    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }
    sort(nums.begin(), nums.end(), [&](int a, int b) {
        if (freq[a] == freq[b]) {
            return a > b;   
        }
        return freq[a] < freq[b];
    });
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sortByFrequency(nums);

    // print result
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
