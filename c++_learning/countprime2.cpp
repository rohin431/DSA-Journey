class Solution {
public:
    int countPrimes(int n) {
        int p=2,count=0;
        vector<int>pro;
        if(n==0 ||n==1)return 0;
        for(int i=2;i<=n;i++){
            pro.push_back(i);
        }
        while(p<=n){
            for(int i=0;i<n;i++){
                if(pro[i]%p==0 && pro[i]!=p)
                pro.erase(find(pro.begin(), pro.end(), pro[i])); 
            }
            p++;
        }
        return pro.size();
    }
};