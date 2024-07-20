class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, string> keys;
        char temp = 'a';
        for (int i = 0 ; i < key.length(); i++) {
            if (key[i] == ' '){
                // keys[key[i]] = " ";
                continue;
            }
            else if(keys.find(key[i])==keys.end()) {
                keys[key[i]] = temp;
                // cout << temp << endl;
                temp++;
            }
        }

        string output = "";
        for (char m : message){
            if (m == ' '){
                output.append(" ");
                // continue;
            }
            else {
            output.append(keys[m]);

            }
        }
        return output;
    }
};