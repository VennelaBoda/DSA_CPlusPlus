#include <bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;

    for (int i = 0; i < n; i++) {

        set<int> hashset;

        for (int j = i + 1; j < n; j++) {
            
            int third = -(arr[i] + arr[j]);

            //find the element in the set:
            if (hashset.find(third) != hashset.end()) {

                vector<int> temp = {arr[i], arr[j], third};

                sort(temp.begin(), temp.end());

                st.insert(temp);

            }

            hashset.insert(arr[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    
    return ans;
}

