class Solution {
public:
    bool isArmstrong(int n) {
        int s = n,c=0;
        while(s> 0){
            s /= s/10;
            c++;
        }
        int sum = 0;
        s=n;
        while(n>0){
            int rem = n%10;
            sum += pow(rem,c);
            
        }
        if(sum == s) return true;
        else return false;
    }
};

public void main(){
    int n ;
    cin>> n;
    Solution sol = new Solution();
    cout<< sol.isArmstrong(n);
}