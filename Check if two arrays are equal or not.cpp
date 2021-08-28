class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        if(A.size()!=B.size())
        {
            return false;
        }
        
      unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
        mp[A[i]]++;
 
    // Traverse arr2[] elements and check if all
    // elements of arr2[] are present same number
    // of times or not.
    for (int i = 0; i < N; i++) {
        // If there is an element in arr2[], but
        // not in arr1[]
        if (mp.find(B[i]) == mp.end())
            return false;
 
        // If an element of arr2[] appears more
        // times than it appears in arr1[]
        if (mp[B[i]] == 0)
            return false;
 
        mp[B[i]]--;
    }
 
    return true;
    
    }
};
