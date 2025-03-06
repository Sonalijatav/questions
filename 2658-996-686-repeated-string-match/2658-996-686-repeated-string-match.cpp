class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string newstr = "";
        int count =0;
        

        // while(newstr.length() < b.length() || newstr.find(b) == string::npos ){
        //     newstr +=a;
        //     count++;
        //     if(newstr.find(b) != string::npos){
        //         return count;
        //     }
        // }


        // Append a to newstr until it's long enough to contain b
        while (newstr.length() < b.length()) {
            newstr += a;
            count++;
        }

        // Check if b is a substring of newstr
        if (newstr.find(b) != string::npos) {
            return count;
        }

        // Append one more a and check again
        newstr += a;
        count++;

        // Final check if b is now a substring of newstr
        if (newstr.find(b) != string::npos) {
            return count;
        }

        



        return -1;
    }
};