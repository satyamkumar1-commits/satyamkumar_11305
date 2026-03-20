class Solution {
    public boolean isThree(int n) {
    int count = 0;
     int sq = (int )Math.sqrt(n);
     for (int i = 1; i<=sq; i++){
        if (n%i == 0){
            if (i == n/i) count++;
            else count = count+2;
        }
     }
     if (count == 3)return true;
     return false;
    }
}