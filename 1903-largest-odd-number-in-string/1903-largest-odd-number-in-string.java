class Solution {
    public String largestOddNumber(String num) {
        StringBuilder sb = new StringBuilder(num);
        while(sb.length() > 0){
            char c = sb.charAt(sb.length()-1);
            if((int)(c-'0')%2 == 0){
                sb.deleteCharAt(sb.length()-1);
            }
            else break;
        }
        return sb.toString();
    }
}