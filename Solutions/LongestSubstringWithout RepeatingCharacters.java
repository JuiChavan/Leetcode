/*Given a string s, find the length of the longest substring without repeating characters.*/
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxLength=0;
        Set<String> str=new HashSet<>();
        for(int i=0;i<s.length();i++){
            
            StringBuilder sb=new StringBuilder();
            Set<Character> charSet=new HashSet<>();

            for(int j=i;j<s.length();j++){

                char currChar=s.charAt(j);

                if(charSet.contains(currChar)){
                    break;
                }

                charSet.add(currChar);
                sb.append(currChar);
                if(maxLength<sb.length()){
                    maxLength=sb.length();
                }
                str.add(sb.toString());
            }
        }
        return maxLength;
    }
}
