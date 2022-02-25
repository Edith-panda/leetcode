class Solution {
public:
    int compareVersion(string s1, string s2) {
        int n1 = s1.length(); 
        int n2 = s2.length(); 
        
        int i = 0, j = 0; 
        
        int number1 = 0, number2 = 0;
        while(i < n1 || j < n2)
        {
            
            while(i < n1 && s1[i] != '.')
            {
                number1 = number1 * 10 + (s1[i] - '0');
                i++;
            }
            
            
            while(j < n2 && s2[j] != '.')
            {
                number2 = number2 * 10 + (s2[j] - '0');
                j++;
            }
            
            // if number1 is greater than number2, from here return 1
            if(number1 > number2)
            {
                return 1;
            }
            
             // if number1 is less than number2, from here return -1
            if(number1 < number2)
            {
                return -1;
            }
            
            // if equal then we have to proceed further
            // again give numbers to zero, as we again generate numbers b/w dots 
            number1 = 0, number2 = 0;
            
            // move both pointers
            i++;
            j++;
        }
        
        // after traversing whole string, if all the versions are equal, that means
        // strings are equal, so return 0
        return 0;
    }
};
    